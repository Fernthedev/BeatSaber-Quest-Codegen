#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBody)
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SkeletonRendererData;
}
namespace GlobalNamespace {
struct __OVRPermissionsRequester__Permission;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyState;
}
namespace GlobalNamespace {
class __OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct __OVRPlugin__Quatf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct __OVRSkeleton__SkeletonPoseData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBody;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRBody);
// Type: ::OVRBody
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(7679))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7526))
// CS Name: ::OVRBody*
class CORDL_TYPE OVRBody : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field BodyTrackingPermission value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRPermissionsRequester__Permission const BodyTrackingPermission;

/// @brief Field _bodyState offset 0x18
 __declspec(property(get=__get__bodyState, put=__set__bodyState)) ::GlobalNamespace::__OVRPlugin__BodyState  _bodyState;

/// @brief Field _boneRotations offset 0x30
 __declspec(property(get=__get__boneRotations, put=__set__boneRotations)) ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf,::Array<::GlobalNamespace::__OVRPlugin__Quatf>*>  _boneRotations;

/// @brief Field _boneTranslations offset 0x38
 __declspec(property(get=__get__boneTranslations, put=__set__boneTranslations)) ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  _boneTranslations;

/// @brief Field _dataChangedSinceLastQuery offset 0x40
 __declspec(property(get=__get__dataChangedSinceLastQuery, put=__set__dataChangedSinceLastQuery)) bool  _dataChangedSinceLastQuery;

/// @brief Field _hasData offset 0x41
 __declspec(property(get=__get__hasData, put=__set__hasData)) bool  _hasData;

/// @brief Field _onPermissionGranted offset 0x48
 __declspec(property(get=__get__onPermissionGranted, put=__set__onPermissionGranted)) ::System::Action_1<::StringW>*  _onPermissionGranted;

 __declspec(property(get=get_BodyState)) ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__BodyState>  BodyState;

/// @brief Convert operator to "::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider"
constexpr operator  ::GlobalNamespace::__OVRSkeleton__IOVRSkeletonDataProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider"
constexpr operator  ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*() noexcept;

constexpr void __set__bodyState(::GlobalNamespace::__OVRPlugin__BodyState  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__BodyState& __get__bodyState() ;

constexpr ::GlobalNamespace::__OVRPlugin__BodyState const& __get__bodyState() const;

constexpr void __set__boneRotations(::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf,::Array<::GlobalNamespace::__OVRPlugin__Quatf>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf,::Array<::GlobalNamespace::__OVRPlugin__Quatf>*>& __get__boneRotations() ;

constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf,::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> const& __get__boneRotations() const;

constexpr void __set__boneTranslations(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>& __get__boneTranslations() ;

constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> const& __get__boneTranslations() const;

constexpr void __set__dataChangedSinceLastQuery(bool  value) ;

constexpr bool& __get__dataChangedSinceLastQuery() ;

constexpr bool const& __get__dataChangedSinceLastQuery() const;

constexpr void __set__hasData(bool  value) ;

constexpr bool& __get__hasData() ;

constexpr bool const& __get__hasData() const;

constexpr void __set__onPermissionGranted(::System::Action_1<::StringW>*  value) ;

constexpr ::System::Action_1<::StringW>* __get__onPermissionGranted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> __get__onPermissionGranted() const;

static inline void setStaticF__trackingInstanceCount(int32_t  value) ;

static inline int32_t getStaticF__trackingInstanceCount() ;

/// @brief Method get_BodyState addr 0x271554c size 0x88 virtual false final false
inline ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__BodyState> get_BodyState() ;

/// @brief Method Awake addr 0x27155d4 size 0x7c virtual false final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x2715650 size 0x114 virtual false final false
inline void OnEnable() ;

/// @brief Method OnPermissionGranted addr 0x27158c0 size 0x60 virtual false final false
inline void OnPermissionGranted(::StringW  permissionId) ;

/// @brief Method StartBodyTracking addr 0x2715764 size 0xd8 virtual false final false
inline bool StartBodyTracking() ;

/// @brief Method OnDisable addr 0x2715920 size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x27159a8 size 0xc virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x27159b4 size 0x8 virtual false final false
inline void Update() ;

/// @brief Method GetBodyState addr 0x271583c size 0x84 virtual false final false
inline void GetBodyState(::GlobalNamespace::__OVRPlugin__Step  step) ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType addr 0x27159bc size 0x8 virtual true final true
inline ::GlobalNamespace::__OVRSkeleton__SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData addr 0x27159c4 size 0x250 virtual true final true
inline ::GlobalNamespace::__OVRSkeleton__SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() ;

/// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData addr 0x2715c14 size 0x18 virtual true final true
inline ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() ;

static inline ::GlobalNamespace::OVRBody* New_ctor() ;

/// @brief Method .ctor addr 0x2715c2c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled addr 0x2715c34 size 0x8 virtual true final true
inline bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRBody(OVRBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRBody(OVRBody const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRBody()  = default;
public:


// Fields

// Static field _trackingInstanceCount


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBody, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRBody);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBody*, "", "OVRBody");
