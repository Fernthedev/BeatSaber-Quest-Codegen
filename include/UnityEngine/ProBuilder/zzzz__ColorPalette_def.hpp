#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorPalette)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColorPalette;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ColorPalette);
// Type: UnityEngine.ProBuilder::ColorPalette
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12112))
// CS Name: ::UnityEngine.ProBuilder::ColorPalette*
class CORDL_TYPE ColorPalette : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field <current>k__BackingField offset 0x18
 __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField)) ::UnityEngine::Color  _current_k__BackingField;

/// @brief Field m_Colors offset 0x28
 __declspec(property(get=__get_m_Colors, put=__set_m_Colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  m_Colors;

 __declspec(property(get=get_current, put=set_current)) ::UnityEngine::Color  current;

 __declspec(property(get=get_colors)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>*  colors;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Color  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::UnityEngine::ProBuilder::IHasDefault"
constexpr operator  ::UnityEngine::ProBuilder::IHasDefault*() noexcept;

constexpr void __set__current_k__BackingField(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__current_k__BackingField() ;

constexpr ::UnityEngine::Color const& __get__current_k__BackingField() const;

constexpr void __set_m_Colors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* __get_m_Colors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color>*> __get_m_Colors() const;

/// @brief Method get_current addr 0x2b3c7f0 size 0xc virtual false final false
inline ::UnityEngine::Color get_current() ;

/// @brief Method set_current addr 0x2b3c7fc size 0xc virtual false final false
inline void set_current(::UnityEngine::Color  value) ;

/// @brief Method get_colors addr 0x2b3c808 size 0x7c virtual false final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* get_colors() ;

/// @brief Method SetColors addr 0x2b3c884 size 0xa4 virtual false final false
inline void SetColors(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*  colors) ;

/// @brief Method SetDefaultValues addr 0x2b3c928 size 0x7c8 virtual true final true
inline void SetDefaultValues() ;

/// @brief Method get_Item addr 0x2b3d0f0 size 0x58 virtual false final false
inline ::UnityEngine::Color get_Item(int32_t  i) ;

/// @brief Method set_Item addr 0x2b3d148 size 0x88 virtual false final false
inline void set_Item(int32_t  i, ::UnityEngine::Color  value) ;

/// @brief Method get_Count addr 0x2b3d1d0 size 0x48 virtual false final false
inline int32_t get_Count() ;

static inline ::UnityEngine::ProBuilder::ColorPalette* New_ctor() ;

/// @brief Method .ctor addr 0x2b3d218 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorPalette(ColorPalette && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorPalette(ColorPalette const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorPalette()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ColorPalette, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ColorPalette);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ColorPalette*, "UnityEngine.ProBuilder", "ColorPalette");
