#ifndef _GLCKHRONOSMUSTPASSES3X_HPP
#define _GLCKHRONOSMUSTPASSES3X_HPP
/*     Copyright (C) 2016 The Khronos Group Inc
 *
 *     Licensed under the Apache License, Version 2.0 (the "License");
 *     you may not use this file except in compliance with the License.
 *     You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
*/

/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */

const string mustpassDir = "gl_cts/data/mustpass/gles/khronos_mustpass/3.2.2.x/";

struct RunParams
{
	glu::ApiType apiType;
	const string configName;
	const char*  glConfigName;
	const string screenRotation;
	int			 baseSeed;
	const char*  fboConfig;
	int			 surfaceWidth;
	int			 surfaceHeight;
};

static const RunParams khronos_mustpass_es3x_first_cfg[] = {
	{ glu::ApiType::es(2, 0), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(2, 0), "deqp-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(2, 0), "gtf-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(2, 0), "gtf-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(2, 0), "gtf-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", 64, -1 },
	{ glu::ApiType::es(2, 0), "gtf-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", -1, 64 },
	{ glu::ApiType::es(2, 0), "gtf-egl", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(2, 0), "gtf-egl", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(3, 0), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 0), "deqp-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 0), "gtf-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 0), "gtf-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(3, 0), "gtf-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", 64, -1 },
	{ glu::ApiType::es(3, 0), "gtf-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", -1, 64 },
	{ glu::ApiType::es(3, 1), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 1), "deqp-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 1), "gtf-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 1), "gtf-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(3, 1), "gtf-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", 64, -1 },
	{ glu::ApiType::es(3, 1), "gtf-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", -1, 64 },
	{ glu::ApiType::es(3, 2), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 2), "khr-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(3, 2), "khr-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", 64, -1 },
	{ glu::ApiType::es(3, 2), "khr-master", DE_NULL, "unspecified", 3, "rgba8888d24s8", -1, 64 },
};

static const RunParams khronos_mustpass_es3x_other_cfg[] = {
	{ glu::ApiType::es(2, 0), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(2, 0), "deqp-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(2, 0), "gtf-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(2, 0), "gtf-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(3, 0), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 0), "deqp-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 0), "gtf-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 0), "gtf-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(3, 1), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 1), "deqp-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 1), "gtf-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 1), "gtf-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
	{ glu::ApiType::es(3, 2), "khr-master", DE_NULL, "unspecified", 1, DE_NULL, 64, 64 },
	{ glu::ApiType::es(3, 2), "khr-master", DE_NULL, "unspecified", 2, DE_NULL, 113, 47 },
};

#endif // _GLCKHRONOSMUSTPASSES3X_HPP
