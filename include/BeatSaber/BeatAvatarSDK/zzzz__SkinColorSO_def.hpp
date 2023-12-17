#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SkinColorSO)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::SkinColorSO);
// Type: BeatSaber.BeatAvatarSDK::SkinColorSO
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15702))
// CS Name: ::BeatSaber.BeatAvatarSDK::SkinColorSO*
class CORDL_TYPE SkinColorSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _id offset 0x18
 __declspec(property(get=__get__id, put=__set__id)) ::StringW  _id;

/// @brief Field _color offset 0x20
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

 __declspec(property(get=get_id)) ::StringW  id;

 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

constexpr void __set__id(::StringW  value) ;

constexpr ::StringW& __get__id() ;

constexpr ::StringW const& __get__id() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

/// @brief Method get_id addr 0xe1c560 size 0x8 virtual false final false
inline ::StringW get_id() ;

/// @brief Method get_Color addr 0xe1c568 size 0xc virtual false final false
inline ::UnityEngine::Color get_Color() ;

static inline ::BeatSaber::BeatAvatarSDK::SkinColorSO* New_ctor() ;

/// @brief Method .ctor addr 0xe1c574 size 0x1008 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinColorSO(SkinColorSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinColorSO(SkinColorSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SkinColorSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::SkinColorSO, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::SkinColorSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::SkinColorSO*, "BeatSaber.BeatAvatarSDK", "SkinColorSO");
