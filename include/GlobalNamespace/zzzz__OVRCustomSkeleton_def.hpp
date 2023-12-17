#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomSkeleton)
namespace GlobalNamespace {
struct __OVRCustomSkeleton__RetargetingType;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRCustomSkeleton__RetargetingType;
}
namespace GlobalNamespace {
class OVRCustomSkeleton;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType);
MARK_REF_PTR_T(::GlobalNamespace::OVRCustomSkeleton);
// Type: ::RetargetingType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8090))
// CS Name: ::OVRCustomSkeleton::RetargetingType
struct CORDL_TYPE __OVRCustomSkeleton__RetargetingType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRCustomSkeleton__RetargetingType_Unwrapped
enum struct ____OVRCustomSkeleton__RetargetingType_Unwrapped : int32_t {
__E_OculusSkeleton = static_cast<int32_t>(0x0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OculusSkeleton value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType const OculusSkeleton;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRCustomSkeleton__RetargetingType_Unwrapped () const noexcept {
return std::bit_cast<____OVRCustomSkeleton__RetargetingType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRCustomSkeleton__RetargetingType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRCustomSkeleton__RetargetingType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRCustomSkeleton__RetargetingType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRCustomSkeleton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8091))
// CS Name: ::OVRCustomSkeleton*
class CORDL_TYPE OVRCustomSkeleton : public ::GlobalNamespace::OVRSkeleton {
public:
// Declarations
using RetargetingType = ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc8 - sizeof(::GlobalNamespace::OVRSkeleton)]{};

/// @brief Field _customBones_V2 offset 0xb8
 __declspec(property(get=__get__customBones_V2, put=__set__customBones_V2)) ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*  _customBones_V2;

/// @brief Field retargetingType offset 0xc0
 __declspec(property(get=__get_retargetingType, put=__set_retargetingType)) ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType  retargetingType;

 __declspec(property(get=get_CustomBones)) ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*  CustomBones;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

constexpr void __set__customBones_V2(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* __get__customBones_V2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> __get__customBones_V2() const;

constexpr void __set_retargetingType(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType  value) ;

constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType& __get_retargetingType() ;

constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType const& __get_retargetingType() const;

/// @brief Method get_CustomBones addr 0x27aa0a8 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_CustomBones() ;

/// @brief Method GetBoneTransform addr 0x27aa0b0 size 0x58 virtual true final false
inline ::UnityEngine::Transform* GetBoneTransform(::GlobalNamespace::__OVRSkeleton__BoneId  boneId) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x27aa108 size 0x4 virtual true final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x27aa10c size 0x4 virtual true final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method AllocateBones addr 0x27aa110 size 0xc8 virtual false final false
inline void AllocateBones() ;

/// @brief Method SetSkeletonType addr 0x27aa1d8 size 0x88 virtual true final false
inline void SetSkeletonType(::GlobalNamespace::__OVRSkeleton__SkeletonType  skeletonType) ;

static inline ::GlobalNamespace::OVRCustomSkeleton* New_ctor() ;

/// @brief Method .ctor addr 0x27aa260 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCustomSkeleton(OVRCustomSkeleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCustomSkeleton(OVRCustomSkeleton const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRCustomSkeleton()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomSkeleton, 0xc8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, "", "OVRCustomSkeleton/RetargetingType");
NEED_NO_BOX(::GlobalNamespace::OVRCustomSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomSkeleton*, "", "OVRCustomSkeleton");
