#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameplayModifierParamsSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierParamsSO);
// Type: ::GameplayModifierParamsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4197))
// CS Name: ::GameplayModifierParamsSO*
class CORDL_TYPE GameplayModifierParamsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _modifierNameLocalizationKey offset 0x18
 __declspec(property(get=__get__modifierNameLocalizationKey, put=__set__modifierNameLocalizationKey)) ::StringW  _modifierNameLocalizationKey;

/// @brief Field _descriptionLocalizationKey offset 0x20
 __declspec(property(get=__get__descriptionLocalizationKey, put=__set__descriptionLocalizationKey)) ::StringW  _descriptionLocalizationKey;

/// @brief Field _multiplier offset 0x28
 __declspec(property(get=__get__multiplier, put=__set__multiplier)) float_t  _multiplier;

/// @brief Field _multiplierConditionallyValid offset 0x2c
 __declspec(property(get=__get__multiplierConditionallyValid, put=__set__multiplierConditionallyValid)) bool  _multiplierConditionallyValid;

/// @brief Field _icon offset 0x30
 __declspec(property(get=__get__icon, put=__set__icon)) ::UnityEngine::Sprite*  _icon;

/// @brief Field _mutuallyExclusives offset 0x38
 __declspec(property(get=__get__mutuallyExclusives, put=__set__mutuallyExclusives)) ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  _mutuallyExclusives;

/// @brief Field _requires offset 0x40
 __declspec(property(get=__get__requires, put=__set__requires)) ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  _requires;

/// @brief Field _requiredBy offset 0x48
 __declspec(property(get=__get__requiredBy, put=__set__requiredBy)) ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  _requiredBy;

/// @brief Field _isInBeta offset 0x50
 __declspec(property(get=__get__isInBeta, put=__set__isInBeta)) bool  _isInBeta;

 __declspec(property(get=get_modifierNameLocalizationKey)) ::StringW  modifierNameLocalizationKey;

 __declspec(property(get=get_descriptionLocalizationKey)) ::StringW  descriptionLocalizationKey;

 __declspec(property(get=get_multiplier)) float_t  multiplier;

 __declspec(property(get=get_multiplierConditionallyValid)) bool  multiplierConditionallyValid;

 __declspec(property(get=get_icon)) ::UnityEngine::Sprite*  icon;

 __declspec(property(get=get_mutuallyExclusives)) ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  mutuallyExclusives;

 __declspec(property(get=get_requires)) ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  _cordl_requires;

 __declspec(property(get=get_requiredBy)) ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  requiredBy;

 __declspec(property(get=get_isInBeta)) bool  isInBeta;

constexpr void __set__modifierNameLocalizationKey(::StringW  value) ;

constexpr ::StringW& __get__modifierNameLocalizationKey() ;

constexpr ::StringW const& __get__modifierNameLocalizationKey() const;

constexpr void __set__descriptionLocalizationKey(::StringW  value) ;

constexpr ::StringW& __get__descriptionLocalizationKey() ;

constexpr ::StringW const& __get__descriptionLocalizationKey() const;

constexpr void __set__multiplier(float_t  value) ;

constexpr float_t& __get__multiplier() ;

constexpr float_t const& __get__multiplier() const;

constexpr void __set__multiplierConditionallyValid(bool  value) ;

constexpr bool& __get__multiplierConditionallyValid() ;

constexpr bool const& __get__multiplierConditionallyValid() const;

constexpr void __set__icon(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__icon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__icon() const;

constexpr void __set__mutuallyExclusives(::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>& __get__mutuallyExclusives() ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get__mutuallyExclusives() const;

constexpr void __set__requires(::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>& __get__requires() ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get__requires() const;

constexpr void __set__requiredBy(::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*>& __get__requiredBy() ;

constexpr ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get__requiredBy() const;

constexpr void __set__isInBeta(bool  value) ;

constexpr bool& __get__isInBeta() ;

constexpr bool const& __get__isInBeta() const;

/// @brief Method get_modifierNameLocalizationKey addr 0x2325b00 size 0x8 virtual false final false
inline ::StringW get_modifierNameLocalizationKey() ;

/// @brief Method get_descriptionLocalizationKey addr 0x2325b08 size 0x8 virtual false final false
inline ::StringW get_descriptionLocalizationKey() ;

/// @brief Method get_multiplier addr 0x2325b10 size 0x8 virtual false final false
inline float_t get_multiplier() ;

/// @brief Method get_multiplierConditionallyValid addr 0x2325b18 size 0x8 virtual false final false
inline bool get_multiplierConditionallyValid() ;

/// @brief Method get_icon addr 0x2325b20 size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_icon() ;

/// @brief Method get_mutuallyExclusives addr 0x2325b28 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*> get_mutuallyExclusives() ;

/// @brief Method get_requires addr 0x2325b30 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*> get_requires() ;

/// @brief Method get_requiredBy addr 0x2325b38 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::GameplayModifierParamsSO*,::Array<::GlobalNamespace::GameplayModifierParamsSO*>*> get_requiredBy() ;

/// @brief Method get_isInBeta addr 0x2325b40 size 0x8 virtual false final false
inline bool get_isInBeta() ;

static inline ::GlobalNamespace::GameplayModifierParamsSO* New_ctor() ;

/// @brief Method .ctor addr 0x2325b48 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierParamsSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayModifierParamsSO(GameplayModifierParamsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierParamsSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayModifierParamsSO(GameplayModifierParamsSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayModifierParamsSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierParamsSO, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierParamsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierParamsSO*, "", "GameplayModifierParamsSO");
