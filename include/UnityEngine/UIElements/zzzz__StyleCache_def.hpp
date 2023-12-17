#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleCache)
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleCache);
// Type: UnityEngine.UIElements::StyleCache
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6815))
// CS Name: ::UnityEngine.UIElements::StyleCache*
class CORDL_TYPE StyleCache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_ComputedStyleCache(::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::UIElements::ComputedStyle>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::UIElements::ComputedStyle>* getStaticF_s_ComputedStyleCache() ;

static inline void setStaticF_s_StyleVariableContextCache(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::UIElements::StyleVariableContext*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::UIElements::StyleVariableContext*>* getStaticF_s_StyleVariableContextCache() ;

static inline void setStaticF_s_ComputedTransitionsCache(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty,::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty,::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>>* getStaticF_s_ComputedTransitionsCache() ;

/// @brief Method TryGetValue addr 0x2dc0a84 size 0x90 virtual false final false
static inline bool TryGetValue(int64_t  hash, ByRef<::UnityEngine::UIElements::ComputedStyle>  data) ;

/// @brief Method SetValue addr 0x2dc0b14 size 0xc4 virtual false final false
static inline void SetValue(int64_t  hash, ByRef<::UnityEngine::UIElements::ComputedStyle>  data) ;

/// @brief Method TryGetValue addr 0x2dc0bd8 size 0x90 virtual false final false
static inline bool TryGetValue(int32_t  hash, ByRef<::UnityEngine::UIElements::StyleVariableContext*>  data) ;

/// @brief Method SetValue addr 0x2dc0c68 size 0x90 virtual false final false
static inline void SetValue(int32_t  hash, ::UnityEngine::UIElements::StyleVariableContext*  data) ;

/// @brief Method TryGetValue addr 0x2dc0cf8 size 0x90 virtual false final false
static inline bool TryGetValue(int32_t  hash, ByRef<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty,::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>>  data) ;

/// @brief Method SetValue addr 0x2dc0d88 size 0x90 virtual false final false
static inline void SetValue(int32_t  hash, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty,::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>  data) ;

// Ctor Parameters [CppParam { name: "", ty: "StyleCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleCache(StyleCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleCache(StyleCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StyleCache()  = default;
public:


// Fields

// Static field s_ComputedStyleCache

// Static field s_StyleVariableContextCache

// Static field s_ComputedTransitionsCache


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleCache, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleCache*, "UnityEngine.UIElements", "StyleCache");
