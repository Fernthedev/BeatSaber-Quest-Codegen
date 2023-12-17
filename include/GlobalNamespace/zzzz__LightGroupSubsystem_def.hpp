#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupSubsystem)
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupSubsystem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupSubsystem);
// Type: ::LightGroupSubsystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4935))
// CS Name: ::LightGroupSubsystem*
class CORDL_TYPE LightGroupSubsystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _lightGroup offset 0x18
 __declspec(property(get=__get__lightGroup, put=__set__lightGroup)) ::GlobalNamespace::LightGroup*  _lightGroup;

 __declspec(property(get=get_groupId)) int32_t  groupId;

 __declspec(property(get=get_lightGroup)) ::GlobalNamespace::LightGroup*  lightGroup;

constexpr void __set__lightGroup(::GlobalNamespace::LightGroup*  value) ;

constexpr ::GlobalNamespace::LightGroup* __get__lightGroup() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroup*> __get__lightGroup() const;

/// @brief Method get_groupId addr 0x23a5f78 size 0x1c virtual false final false
inline int32_t get_groupId() ;

/// @brief Method get_lightGroup addr 0x23a99a8 size 0x8 virtual false final false
inline ::GlobalNamespace::LightGroup* get_lightGroup() ;

/// @brief Method OnEnable addr 0x23a99b0 size 0x60 virtual false final false
inline void OnEnable() ;

static inline ::GlobalNamespace::LightGroupSubsystem* New_ctor() ;

/// @brief Method .ctor addr 0x23a5818 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroupSubsystem(LightGroupSubsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroupSubsystem(LightGroupSubsystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightGroupSubsystem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupSubsystem, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSubsystem*, "", "LightGroupSubsystem");
