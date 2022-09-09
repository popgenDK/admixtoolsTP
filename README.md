
<!-- README.md is generated from README.Rmd. Please edit that file --->
<!-- badges: start 
  [![Travis build status](https://travis-ci.com/uqrmaie1/admixtools.svg?branch=master)](https://travis-ci.com/uqrmaie1/admixtools)
  badges: end -->

# ADMIXTOOLS 2 with timepolice

modified from https://github.com/uqrmaie1/admixtools/

## run with the two below temporal constraints

example that can be run on brenda

``` r
 library(admixtools,lib.loc="/home/albrecht/R/x86_64-pc-linux-gnu-library/3.6/")
source("/home/albrecht/tmp/timepoliceGit.R")
set.seed(1)
res = find_graphs(example_f2_blocks, numadmix = 2)


```


## modify the time police

``` r

source("/home/albrecht/tmp/timepoliceGit.R")


timepolice <- function(graph){

  # g <<- graph
  # stop() 
  
  # return(TRUE) ## no timepolice
  
  #admixed node with whos two ancestors are ancestors of each other.   e.g. 
  # A,B -> X (X mix of A and B), A->Z -> Y->B (B has A as an ancestor)
  df <- as.data.frame(igraph::as_edgelist(graph) , stringsAsFactors= FALSE)
  names(df) <- c("from","to")
  if(length(timepoliceOne(df))>0)
    return(FALSE)
  
  #node with has to admixed direct descendands
  # A,B -> X (X mix of A and B), A,C -> Y (A has two admixed direct descendants)
  if(timepoliceTwo(df))
    return(FALSE)
  
 
  
  return(TRUE)
  

}


set.seed(1)
res = find_graphs(example_f2_blocks, numadmix = 2)


``` 
### Time police functions
(/home/albrecht/tmp/timepoliceGit.R)
``` r






getAnc <- function(x,df,rev=FALSE){

    anc <-  df[df$to==tail(x,1),"from"]
    if(length(anc)>2){
        cat("2> anc. To",tail(x,1),"\n")
        print(anc)
    }
    if(length(anc)==2){
        if(rev)
            return( c(getAnc(c(x,anc[1]),df=df),getAnc(anc[2],df=df)))
        else
            return( c(getAnc(c(x,anc[2]),df=df),getAnc(anc[1],df=df)))
    }
    if(length(anc)==0)
        return(x)
  
    getAnc(c(x,anc),df=df)  
}

# returns the node with time fuckup

timepoliceOne <- function(df){

    nodes <- unique(df$to)
    ancestors <-lapply(nodes,getAnc,df=df)
    ancestors2 <-lapply(nodes,getAnc,df=df,rev=T)

    ##is the first direct ancestor node also part of the path of the second ancestror
    timeFuck <- sapply(ancestors,function(x) x[2]%in%x[-2] )
    ## same but swich ancestors
    timeFuck2 <- sapply(ancestors2,function(x) x[2]%in%x[-2] )

    nodes[timeFuck | timeFuck2]
}

timepoliceTwo <- function(df){
    ## remove scenarious with two simultationus admixture events
    #    w <- which(igraph::degree(g, mode='in') == 2)
    w <- df$to%in%df[duplicated(df$to),2]
    if(any(duplicated(df$from[w])))
        return(TRUE)

    return(FALSE) ## no simultanous admixture
}


timepolice <- function(graph){

  # g <<- graph ## to get a graph to the global env. 
  # stop() 

  #return(TRUE) ## no timepolice
  
  #admixed node with whos two ancestors are ancestors of each other.   e.g. 
  # A,B -> X (X mix of A and B), A->Z -> Y->B (B has A as an ancestor)
  df <- as.data.frame(igraph::as_edgelist(graph) , stringsAsFactors= FALSE)
  names(df) <- c("from","to")
  if(length(timepoliceOne(df))>0)
    return(FALSE)
  
  #node with has to admixed direct descendands
  # A,B -> X (X mix of A and B), A,C -> Y (A has two admixed direct descendants)
  if(timepoliceTwo(df))
    return(FALSE)
   
  
  return(TRUE)
}



``` 


## change to admixtools 

Added a timepolice() fundtion that can be used to remove temporally impossible graphs (or other graphs you dont like)
``` r
satisfies_constraints = function(graph, nonzero_f4 = NULL, admix_constraints = NULL, event_order = NULL) {
   timepolice(graph) && ## added to make sure only graphs are temporally possible
  satisfies_zerof4(graph, nonzero_f4) &&
    satisfies_numadmix(graph, admix_constraints) &&
    satisfies_eventorder(graph, event_order)
}
```

## install 
``` r
devtools::install_github("aalbrechtsen/admixtoolsTP", dependencies = TRUE)
```

