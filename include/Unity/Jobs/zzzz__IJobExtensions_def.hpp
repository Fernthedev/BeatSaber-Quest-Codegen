#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IJobExtensions)
namespace System {
class Object;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace GlobalNamespace {
struct __OVRScenePlane__GetBoundaryJob;
}
namespace GlobalNamespace {
struct __OVRScenePlane__GetBoundaryLengthJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__BakeMeshJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__GetTriangleMeshJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__PopulateMeshDataJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__GetMeshJob;
}
namespace Unity::Collections {
struct NativeArrayDisposeJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Jobs {
template<typename T>
struct __IJobExtensions__JobStruct_1;
}
namespace GlobalNamespace {
template<typename T>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>;
}
namespace GlobalNamespace {
template<>
class __IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>;
}
namespace Unity::Jobs {
class IJobExtensions;
}
namespace Unity::Jobs {
template<typename T>
struct __IJobExtensions__JobStruct_1;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction);
MARK_REF_PTR_T(::Unity::Jobs::IJobExtensions);
MARK_GEN_VAL_T(::Unity::Jobs::__IJobExtensions__JobStruct_1);
// Type: ::ExecuteJobFunction
// Type: ::JobStruct`1
// Type: Unity.Jobs::IJobExtensions
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9976))
// CS Name: ::Unity.Jobs::IJobExtensions*
class CORDL_TYPE IJobExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using JobStruct_1 = ::Unity::Jobs::__IJobExtensions__JobStruct_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Schedule addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::Unity::Jobs::JobHandle Schedule(T  jobData, ::Unity::Jobs::JobHandle  dependsOn) ;

// Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IJobExtensions(IJobExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJobExtensions(IJobExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IJobExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobExtensions, 0x10>, "Size mismatch!");

} // namespace end def Unity::Jobs
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9974)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7398 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9974)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7396 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9974)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7395 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9974)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7394 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9974))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7393 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9974)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7392 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9974)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7391 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9974)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7390 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9974))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9974), inst: 7386 })
// CS Name: ::IJobExtensions::JobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::Unity::Collections::NativeArrayDisposeJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobExtensions__JobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobExtensions__JobStruct_1__ExecuteJobFunction(__IJobExtensions__JobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7398 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7396 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7395 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7394 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7393 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7392 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7391 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7390 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::JobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9975), inst: 7386 })
// CS Name: ::IJobExtensions::JobStruct`1<T>
struct CORDL_TYPE __IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::Unity::Collections::NativeArrayDisposeJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobExtensions__JobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobExtensions__JobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction, "Unity.Jobs", "IJobExtensions/JobStruct`1/ExecuteJobFunction");
NEED_NO_BOX(::Unity::Jobs::IJobExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobExtensions*, "Unity.Jobs", "IJobExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::__IJobExtensions__JobStruct_1, "Unity.Jobs", "IJobExtensions/JobStruct`1");
