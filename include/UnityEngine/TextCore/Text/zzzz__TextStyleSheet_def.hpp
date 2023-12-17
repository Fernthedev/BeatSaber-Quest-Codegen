#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextStyleSheet)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextStyleSheet);
// Type: UnityEngine.TextCore.Text::TextStyleSheet
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13732))
// CS Name: ::UnityEngine.TextCore.Text::TextStyleSheet*
class CORDL_TYPE TextStyleSheet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field m_StyleList offset 0x18
 __declspec(property(get=__get_m_StyleList, put=__set_m_StyleList)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*  m_StyleList;

/// @brief Field m_StyleLookupDictionary offset 0x20
 __declspec(property(get=__get_m_StyleLookupDictionary, put=__set_m_StyleLookupDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::TextStyle*>*  m_StyleLookupDictionary;

 __declspec(property(get=get_styles)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*  styles;

constexpr void __set_m_StyleList(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* __get_m_StyleList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*> __get_m_StyleList() const;

constexpr void __set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::TextStyle*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::TextStyle*>* __get_m_StyleLookupDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::TextStyle*>*> __get_m_StyleLookupDictionary() const;

/// @brief Method get_styles addr 0x2d4c1c8 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* get_styles() ;

/// @brief Method GetStyle addr 0x2d4c1d0 size 0x88 virtual false final false
inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(int32_t  hashCode) ;

/// @brief Method GetStyle addr 0x2d4c41c size 0x98 virtual false final false
inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(::StringW  name) ;

/// @brief Method RefreshStyles addr 0x2d4c4b4 size 0x4 virtual false final false
inline void RefreshStyles() ;

/// @brief Method LoadStyleDictionaryInternal addr 0x2d4c258 size 0x1c4 virtual false final false
inline void LoadStyleDictionaryInternal() ;

static inline ::UnityEngine::TextCore::Text::TextStyleSheet* New_ctor() ;

/// @brief Method .ctor addr 0x2d4c4b8 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextStyleSheet(TextStyleSheet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextStyleSheet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextStyleSheet(TextStyleSheet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextStyleSheet()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextStyleSheet, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextStyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextStyleSheet*, "UnityEngine.TextCore.Text", "TextStyleSheet");
