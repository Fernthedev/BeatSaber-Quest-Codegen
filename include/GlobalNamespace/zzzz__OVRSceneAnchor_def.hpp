#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneAnchor)
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneAnchor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneAnchor);
// Type: ::OVRSceneAnchor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7955))
// CS Name: ::OVRSceneAnchor*
class CORDL_TYPE OVRSceneAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field <Space>k__BackingField offset 0x18
 __declspec(property(get=__get__Space_k__BackingField, put=__set__Space_k__BackingField)) ::GlobalNamespace::OVRSpace  _Space_k__BackingField;

/// @brief Field <Uuid>k__BackingField offset 0x20
 __declspec(property(get=__get__Uuid_k__BackingField, put=__set__Uuid_k__BackingField)) ::System::Guid  _Uuid_k__BackingField;

/// @brief Field <Anchor>k__BackingField offset 0x30
 __declspec(property(get=__get__Anchor_k__BackingField, put=__set__Anchor_k__BackingField)) ::GlobalNamespace::OVRAnchor  _Anchor_k__BackingField;

/// @brief Field <IsTracked>k__BackingField offset 0x48
 __declspec(property(get=__get__IsTracked_k__BackingField, put=__set__IsTracked_k__BackingField)) bool  _IsTracked_k__BackingField;

/// @brief Field _pose offset 0x4c
 __declspec(property(get=__get__pose, put=__set__pose)) ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef>  _pose;

 __declspec(property(get=get_Space, put=set_Space)) ::GlobalNamespace::OVRSpace  Space;

 __declspec(property(get=get_Uuid, put=set_Uuid)) ::System::Guid  Uuid;

 __declspec(property(get=get_Anchor, put=set_Anchor)) ::GlobalNamespace::OVRAnchor  Anchor;

 __declspec(property(get=get_IsTracked, put=set_IsTracked)) bool  IsTracked;

constexpr void __set__Space_k__BackingField(::GlobalNamespace::OVRSpace  value) ;

constexpr ::GlobalNamespace::OVRSpace& __get__Space_k__BackingField() ;

constexpr ::GlobalNamespace::OVRSpace const& __get__Space_k__BackingField() const;

constexpr void __set__Uuid_k__BackingField(::System::Guid  value) ;

constexpr ::System::Guid& __get__Uuid_k__BackingField() ;

constexpr ::System::Guid const& __get__Uuid_k__BackingField() const;

constexpr void __set__Anchor_k__BackingField(::GlobalNamespace::OVRAnchor  value) ;

constexpr ::GlobalNamespace::OVRAnchor& __get__Anchor_k__BackingField() ;

constexpr ::GlobalNamespace::OVRAnchor const& __get__Anchor_k__BackingField() const;

constexpr void __set__IsTracked_k__BackingField(bool  value) ;

constexpr bool& __get__IsTracked_k__BackingField() ;

constexpr bool const& __get__IsTracked_k__BackingField() const;

static inline void setStaticF_RotateY180(::UnityEngine::Quaternion  value) ;

static inline ::UnityEngine::Quaternion getStaticF_RotateY180() ;

constexpr void __set__pose(::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef>  value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef>& __get__pose() ;

constexpr ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__Posef> const& __get__pose() const;

static inline void setStaticF_AnchorReferenceCountDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace,int32_t>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace,int32_t>* getStaticF_AnchorReferenceCountDictionary() ;

static inline void setStaticF_SceneAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRSceneAnchor*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRSceneAnchor*>* getStaticF_SceneAnchors() ;

static inline void setStaticF_SceneAnchorsList(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>*  value) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* getStaticF_SceneAnchorsList() ;

/// @brief Method get_Space addr 0x277f6f4 size 0x8 virtual false final false
inline ::GlobalNamespace::OVRSpace get_Space() ;

/// @brief Method set_Space addr 0x277f6fc size 0x8 virtual false final false
inline void set_Space(::GlobalNamespace::OVRSpace  value) ;

/// @brief Method get_Uuid addr 0x277f704 size 0xc virtual false final false
inline ::System::Guid get_Uuid() ;

/// @brief Method set_Uuid addr 0x277f710 size 0x8 virtual false final false
inline void set_Uuid(::System::Guid  value) ;

/// @brief Method get_Anchor addr 0x277f718 size 0x14 virtual false final false
inline ::GlobalNamespace::OVRAnchor get_Anchor() ;

/// @brief Method set_Anchor addr 0x277f72c size 0x14 virtual false final false
inline void set_Anchor(::GlobalNamespace::OVRAnchor  value) ;

/// @brief Method get_IsTracked addr 0x277f740 size 0x8 virtual false final false
inline bool get_IsTracked() ;

/// @brief Method set_IsTracked addr 0x277f748 size 0xc virtual false final false
inline void set_IsTracked(bool  value) ;

/// @brief Method IsComponentEnabled addr 0x277f754 size 0x8c virtual false final false
inline bool IsComponentEnabled(::GlobalNamespace::__OVRPlugin__SpaceComponentType  spaceComponentType) ;

/// @brief Method SyncComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void SyncComponent(::GlobalNamespace::__OVRPlugin__SpaceComponentType  spaceComponentType) ;

/// @brief Method ClearPoseCache addr 0x277f7e4 size 0x10 virtual false final false
inline void ClearPoseCache() ;

/// @brief Method Initialize addr 0x277f7f4 size 0x36c virtual false final false
inline void Initialize(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method InitializeFrom addr 0x277fe84 size 0xe8 virtual false final false
inline void InitializeFrom(::GlobalNamespace::OVRSceneAnchor*  other) ;

/// @brief Method GetSceneAnchors addr 0x277ff6c size 0xf8 virtual false final false
static inline void GetSceneAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>*  anchors) ;

/// @brief Method TryUpdateTransform addr 0x277fb74 size 0x310 virtual false final false
inline bool TryUpdateTransform(bool  useCache) ;

/// @brief Method OnDestroy addr 0x2780064 size 0x1e0 virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::OVRSceneAnchor* New_ctor() ;

/// @brief Method .ctor addr 0x2780244 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneAnchor(OVRSceneAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneAnchor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneAnchor(OVRSceneAnchor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRSceneAnchor()  = default;
public:


// Fields

// Static field RotateY180

// Static field AnchorReferenceCountDictionary

// Static field SceneAnchors

// Static field SceneAnchorsList


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneAnchor, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneAnchor*, "", "OVRSceneAnchor");
