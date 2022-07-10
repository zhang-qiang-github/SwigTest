

#ifndef PACKA_EXPORTES_H
#define PACKA_EXPORTES_H

#if (WIN32)
	#ifdef PackA_EXPORTS
		#define PackA_EXPORT __declspec(dllexport)
	#else
		#define PackA_EXPORT __declspec(dllimport)
	#endif
#else
	#define PackA_EXPORT
#endif


#endif