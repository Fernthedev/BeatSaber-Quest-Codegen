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
CORDL_MODULE_EXPORT(IJobParallelForExtensions)
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformToUnitySpaceJob;
}
namespace System {
class Object;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformTrianglesJob;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__WriteColorsAsBytesJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__NegateXJob;
}
namespace Unity::Jobs {
template<typename T>
struct __IJobParallelForExtensions__ParallelForJobStruct_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace GlobalNamespace {
template<typename T>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction;
}
namespace GlobalNamespace {
template<>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>;
}
namespace GlobalNamespace {
template<>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>;
}
namespace GlobalNamespace {
template<>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>;
}
namespace GlobalNamespace {
template<>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>;
}
namespace GlobalNamespace {
template<>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>;
}
namespace GlobalNamespace {
template<>
class __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>;
}
namespace Unity::Jobs {
class IJobParallelForExtensions;
}
namespace Unity::Jobs {
template<typename T>
struct __IJobParallelForExtensions__ParallelForJobStruct_1;
}
namespace Unity::Jobs {
template<>
struct __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>;
}
namespace Unity::Jobs {
template<>
struct __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction);
MARK_REF_PTR_T(::Unity::Jobs::IJobParallelForExtensions);
MARK_GEN_VAL_T(::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1);
// Type: ::ExecuteJobFunction
// Type: ::ParallelForJobStruct`1
// Type: Unity.Jobs::IJobParallelForExtensions
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9972))
// CS Name: ::Unity.Jobs::IJobParallelForExtensions*
class CORDL_TYPE IJobParallelForExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using ParallelForJobStruct_1 = ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Schedule addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::Unity::Jobs::JobHandle Schedule(T  jobData, int32_t  arrayLength, int32_t  innerloopBatchCount, ::Unity::Jobs::JobHandle  dependsOn) ;

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IJobParallelForExtensions(IJobParallelForExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJobParallelForExtensions(IJobParallelForExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IJobParallelForExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::IJobParallelForExtensions, 0x10>, "Size mismatch!");

} // namespace end def Unity::Jobs
// Type: ::ExecuteJobFunction
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9970))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9970), inst: 7400 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction()  = default;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9970)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9970), inst: 7399 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction()  = default;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9970)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9970), inst: 7397 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction()  = default;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9970))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9970), inst: 7389 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction()  = default;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9970)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9970), inst: 7388 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction()  = default;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9970)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9970), inst: 7387 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1::ExecuteJobFunction<T>*
class CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9971))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9971), inst: 7400 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1<T>
struct CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9971))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9971), inst: 7399 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1<T>
struct CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9971))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9971), inst: 7397 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1<T>
struct CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9971))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9971), inst: 7389 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1<T>
struct CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9971))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9971), inst: 7388 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1<T>
struct CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
// Type: ::ParallelForJobStruct`1
namespace Unity::Jobs {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9971))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9971), inst: 7387 })
// CS Name: ::IJobParallelForExtensions::ParallelForJobStruct`1<T>
struct CORDL_TYPE __IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob> : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ExecuteJobFunction = ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static inline void setStaticF_jobReflectionData(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_jobReflectionData() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Execute(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IJobParallelForExtensions__ParallelForJobStruct_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IJobParallelForExtensions__ParallelForJobStruct_1()  = default;


// Fields

// Static field jobReflectionData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction, "Unity.Jobs", "IJobParallelForExtensions/ParallelForJobStruct`1/ExecuteJobFunction");
NEED_NO_BOX(::Unity::Jobs::IJobParallelForExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelForExtensions*, "Unity.Jobs", "IJobParallelForExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1, "Unity.Jobs", "IJobParallelForExtensions/ParallelForJobStruct`1");
