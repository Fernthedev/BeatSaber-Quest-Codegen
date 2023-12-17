#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyUtil)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleEnumType;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyUtil;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil);
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyUtil
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7478))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StylePropertyUtil*
class CORDL_TYPE StylePropertyUtil : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_AnimatablePropertiesHash(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* getStaticF_s_AnimatablePropertiesHash() ;

static inline void setStaticF_s_NameToId(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleSheets::StylePropertyId>* getStaticF_s_NameToId() ;

static inline void setStaticF_s_IdToName(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW>* getStaticF_s_IdToName() ;

static inline void setStaticF_s_AnimatableProperties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>  value) ;

static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> getStaticF_s_AnimatableProperties() ;

/// @brief Method IsAnimatable addr 0x2def0b4 size 0x80 virtual false final false
static inline bool IsAnimatable(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

/// @brief Method TryGetEnumIntValue addr 0x2def134 size 0xd98 virtual false final false
static inline bool TryGetEnumIntValue(::UnityEngine::UIElements::StyleSheets::StyleEnumType  enumType, ::StringW  value, ByRef<int32_t>  intValue) ;

/// @brief Method IsMatchingShorthand addr 0x2defecc size 0x130 virtual false final false
static inline bool IsMatchingShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyId  shorthand, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id) ;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StylePropertyUtil(StylePropertyUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StylePropertyUtil(StylePropertyUtil const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StylePropertyUtil()  = default;
public:


// Fields

// Static field s_AnimatablePropertiesHash

// Static field s_NameToId

// Static field s_IdToName

// Static field s_AnimatableProperties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*, "UnityEngine.UIElements.StyleSheets", "StylePropertyUtil");
