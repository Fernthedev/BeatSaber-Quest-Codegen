#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TrackedPoseDriverDataDescription)
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriverDataDescription__PoseData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackedPose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriverDataDescription;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriverDataDescription__PoseData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData);
// Type: ::PoseData
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16189))
// CS Name: ::TrackedPoseDriverDataDescription::PoseData
struct CORDL_TYPE __TrackedPoseDriverDataDescription__PoseData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field PoseNames offset 0x0
 __declspec(property(get=__get_PoseNames, put=__set_PoseNames)) ::System::Collections::Generic::List_1<::StringW>*  PoseNames;

/// @brief Field Poses offset 0x8
 __declspec(property(get=__get_Poses, put=__set_Poses)) ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*  Poses;

constexpr void __set_PoseNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_PoseNames() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_PoseNames() const;

constexpr void __set_Poses(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>* __get_Poses() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*> __get_Poses() const;

// Ctor Parameters [CppParam { name: "PoseNames", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "Poses", ty: "::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*", modifiers: "", def_value: None }]
constexpr __TrackedPoseDriverDataDescription__PoseData(::System::Collections::Generic::List_1<::StringW>*  PoseNames, ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose>*  Poses) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TrackedPoseDriverDataDescription__PoseData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TrackedPoseDriverDataDescription__PoseData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::SpatialTracking
// Type: UnityEngine.SpatialTracking::TrackedPoseDriverDataDescription
namespace UnityEngine::SpatialTracking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16190))
// CS Name: ::UnityEngine.SpatialTracking::TrackedPoseDriverDataDescription*
class CORDL_TYPE TrackedPoseDriverDataDescription : public ::System::Object {
public:
// Declarations
using PoseData = ::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_DeviceData(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData>* getStaticF_DeviceData() ;

static inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* New_ctor() ;

/// @brief Method .ctor addr 0x2d189ec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriverDataDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedPoseDriverDataDescription(TrackedPoseDriverDataDescription const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackedPoseDriverDataDescription()  = default;
public:


// Fields

// Static field DeviceData


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::SpatialTracking
NEED_NO_BOX(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriverDataDescription__PoseData, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription/PoseData");
