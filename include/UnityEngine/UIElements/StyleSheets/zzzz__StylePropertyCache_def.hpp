#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StylePropertyCache)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StylePropertyCache);
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyCache
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7479))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StylePropertyCache*
class CORDL_TYPE StylePropertyCache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_PropertySyntaxCache(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_PropertySyntaxCache() ;

static inline void setStaticF_s_NonTerminalValues(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_NonTerminalValues() ;

/// @brief Method TryGetSyntax addr 0x2defffc size 0x90 virtual false final false
static inline bool TryGetSyntax(::StringW  name, ByRef<::StringW>  syntax) ;

/// @brief Method TryGetNonTerminalValue addr 0x2df008c size 0x90 virtual false final false
static inline bool TryGetNonTerminalValue(::StringW  name, ByRef<::StringW>  syntax) ;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StylePropertyCache(StylePropertyCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StylePropertyCache(StylePropertyCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StylePropertyCache()  = default;
public:


// Fields

// Static field s_PropertySyntaxCache

// Static field s_NonTerminalValues


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyCache, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyCache*, "UnityEngine.UIElements.StyleSheets", "StylePropertyCache");
