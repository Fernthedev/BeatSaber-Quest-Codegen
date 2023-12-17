#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemesSettings)
namespace GlobalNamespace {
class ColorScheme;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemesSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemesSettings);
// Type: ::ColorSchemesSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4607))
// CS Name: ::ColorSchemesSettings*
class CORDL_TYPE ColorSchemesSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field overrideDefaultColors offset 0x10
 __declspec(property(get=__get_overrideDefaultColors, put=__set_overrideDefaultColors)) bool  overrideDefaultColors;

/// @brief Field _colorSchemesList offset 0x18
 __declspec(property(get=__get__colorSchemesList, put=__set__colorSchemesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*  _colorSchemesList;

/// @brief Field _colorSchemesDict offset 0x20
 __declspec(property(get=__get__colorSchemesDict, put=__set__colorSchemesDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ColorScheme*>*  _colorSchemesDict;

/// @brief Field _selectedColorSchemeId offset 0x28
 __declspec(property(get=__get__selectedColorSchemeId, put=__set__selectedColorSchemeId)) ::StringW  _selectedColorSchemeId;

 __declspec(property(get=get_selectedColorSchemeId, put=set_selectedColorSchemeId)) ::StringW  selectedColorSchemeId;

constexpr void __set_overrideDefaultColors(bool  value) ;

constexpr bool& __get_overrideDefaultColors() ;

constexpr bool const& __get_overrideDefaultColors() const;

constexpr void __set__colorSchemesList(::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* __get__colorSchemesList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*> __get__colorSchemesList() const;

constexpr void __set__colorSchemesDict(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ColorScheme*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ColorScheme*>* __get__colorSchemesDict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ColorScheme*>*> __get__colorSchemesDict() const;

constexpr void __set__selectedColorSchemeId(::StringW  value) ;

constexpr ::StringW& __get__selectedColorSchemeId() ;

constexpr ::StringW const& __get__selectedColorSchemeId() const;

/// @brief Method set_selectedColorSchemeId addr 0x236a778 size 0x8 virtual false final false
inline void set_selectedColorSchemeId(::StringW  value) ;

/// @brief Method get_selectedColorSchemeId addr 0x236a780 size 0x8 virtual false final false
inline ::StringW get_selectedColorSchemeId() ;

static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>  colorSchemes) ;

/// @brief Method .ctor addr 0x236a788 size 0x160 virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>  colorSchemes) ;

static inline ::GlobalNamespace::ColorSchemesSettings* New_ctor(::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*>  colorSchemeSOs) ;

/// @brief Method .ctor addr 0x236a8e8 size 0x20 virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*>  colorSchemeSOs) ;

/// @brief Method ConvertColorSchemeSOs addr 0x236a908 size 0x114 virtual false final false
static inline ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*> ConvertColorSchemeSOs(::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*>  colorSchemeSOs) ;

/// @brief Method GetNumberOfColorSchemes addr 0x236aa1c size 0x48 virtual false final false
inline int32_t GetNumberOfColorSchemes() ;

/// @brief Method GetColorSchemeForIdx addr 0x236aa64 size 0x58 virtual false final false
inline ::GlobalNamespace::ColorScheme* GetColorSchemeForIdx(int32_t  idx) ;

/// @brief Method GetColorSchemeForId addr 0x236aabc size 0x58 virtual false final false
inline ::GlobalNamespace::ColorScheme* GetColorSchemeForId(::StringW  id) ;

/// @brief Method SetColorSchemeForId addr 0x236ab14 size 0x110 virtual false final false
inline void SetColorSchemeForId(::GlobalNamespace::ColorScheme*  colorScheme) ;

/// @brief Method GetSelectedColorScheme addr 0x236ac24 size 0x54 virtual false final false
inline ::GlobalNamespace::ColorScheme* GetSelectedColorScheme() ;

/// @brief Method GetSelectedColorSchemeIdx addr 0x236ac78 size 0xa0 virtual false final false
inline int32_t GetSelectedColorSchemeIdx() ;

/// @brief Method GetOverrideColorScheme addr 0x235ac94 size 0x14 virtual false final false
inline ::GlobalNamespace::ColorScheme* GetOverrideColorScheme() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemesSettings(ColorSchemesSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemesSettings(ColorSchemesSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemesSettings()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemesSettings, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesSettings*, "", "ColorSchemesSettings");
