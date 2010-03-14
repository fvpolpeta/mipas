/********************************************************************************/
/*                                                                              */
/* Papyrus 3 library.                                                           */
/* This library constitutes a DICOM file system which helps reading and writing */
/* DICOM files and DICOMDIR files.                                              */
/*                                                                              */
/* Copyright (C) 2004 - Service of  Medical Informatics -                       */
/* University Hospitals of Geneva (HUG), Geneva, Switzerland                    */
/*                                                                              */
/* This library is a free software; you can redistribute it and/or modify it    */
/* under the terms of the GNU Lesser General Public License as published by the */
/*  Free Software Foundation; either version 2.1 of the License, or             */
/* (at your option) any later version.                                          */
/*                                                                              */
/* This library is distributed in the hope that it will be useful,              */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of               */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                         */
/* See the GNU Lesser General Public License for more details.                  */
/*                                                                              */
/* You should have received a copy of the GNU Lesser General Public License     */
/* along with this library; if not, write to                                    */
/* the Free Software Foundation, Inc.,                                          */
/* 59 Temple Place, Suite 330,                                                  */
/* Boston, MA 02111-1307 USA                                                    */
/*                                                                              */
/* You can contact us for more information at osiris@sim.hcuge.ch               */
/* or by writing to Papyrus,                                                    */
/* Unite d'Imagerie Numerique / Service d'Informatique Medicale / HUG,          */
/* 24, Micheli-du-Crest street, 1211 Geneva 14, Switzerland.                    */
/*                                                                              */
/* The University Hopitals of Geneva, hereby disclaims all copyright interest   */
/* in the library `Papyrus' (a library for reading and writing DICOM files).    */
/*                                                                              */
/* Geneva, april 2004                                                           */
/* Antoine Geissbuhler, head of the Service of Medical Informatics,             */
/* University Hospitals of Geneva, Switzerland                                  */
/*                                                                              */
/********************************************************************************/

/********************************************************************************/
/*				                                                                */
/*	Project  : P A P Y R U S  Toolkit                                           */
/*	File     : PapyWild3.h                                                      */
/*	Function : declaration of the fct of wild                                   */
/*	Authors  : Matthieu Funk                                                    */
/*             Christian Girard                                                 */
/*             Jean-Francois Vurlod                                             */
/*             Marianne Logean                                                  */
/*                                                                              */
/*	History  : 12.1990      version 1.0                                         */
/*             04.1991      version 1.1                                         */
/*             12.1991      version 1.2                                         */
/*             06.1993      version 2.0                                         */
/*             06.1994      version 3.0                                         */
/*             06.1995      version 3.1                                         */
/*             02.1996      version 3.3                                         */
/*             02.1999      version 3.6                                         */
/*             04.2001      version 3.7                                         */
/*             09.2001      version 3.7  on CVS                                 */
/*             10.2001      version 3.71 MAJ Dicom par CHG                      */
/*                                                                              */
/********************************************************************************/


#ifndef PapyWild3H
#define PapyWild3H
#endif


#ifdef _NO_PROTO
extern char	*wildname();
extern void	wild3();

extern void	wild2exit();
extern void	wildexit();
extern void	wildcexit();
extern void	wildrexit();
extern void	tameexit();
#else
extern char	*wildname(register char *);
extern void	wild3(char *,char *);

extern void	wild2exit(char *, char *);
extern void	wildexit(char *);
extern void	wildcexit(char *);
extern void	wildrexit(char *);
extern void	tameexit();
#endif
