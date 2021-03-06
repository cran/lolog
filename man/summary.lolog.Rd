% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/lolog.R
\name{summary.lolog}
\alias{summary.lolog}
\title{Summary of a `lolog` object}
\usage{
\method{summary}{lolog}(object, ...)
}
\arguments{
\item{object}{the object}

\item{...}{additional parameters (unused)}
}
\description{
Summary of a `lolog` object
}
\examples{
data(lazega)
fit <- lologVariational(lazega ~ edges() + nodeMatch("office") + triangles, 
                        nReplicates=50L, dyadInclusionRate=1)
summary(fit)
}
