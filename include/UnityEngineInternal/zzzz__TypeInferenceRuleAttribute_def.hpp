#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeInferenceRuleAttribute)
namespace UnityEngineInternal {
struct TypeInferenceRules;
}
// Forward declare root types
namespace UnityEngineInternal {
class TypeInferenceRuleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::TypeInferenceRuleAttribute);
// Type: UnityEngineInternal::TypeInferenceRuleAttribute
namespace UnityEngineInternal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9962))
// CS Name: ::UnityEngineInternal::TypeInferenceRuleAttribute*
class CORDL_TYPE TypeInferenceRuleAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _rule offset 0x10
 __declspec(property(get=__get__rule, put=__set__rule)) ::StringW  _rule;

constexpr void __set__rule(::StringW  value) ;

constexpr ::StringW& __get__rule() ;

constexpr ::StringW const& __get__rule() const;

static inline ::UnityEngineInternal::TypeInferenceRuleAttribute* New_ctor(::UnityEngineInternal::TypeInferenceRules  rule) ;

/// @brief Method .ctor addr 0x2c9d4fc size 0x84 virtual false final false
inline void _ctor(::UnityEngineInternal::TypeInferenceRules  rule) ;

static inline ::UnityEngineInternal::TypeInferenceRuleAttribute* New_ctor(::StringW  rule) ;

/// @brief Method .ctor addr 0x2c9d580 size 0x28 virtual false final false
inline void _ctor(::StringW  rule) ;

/// @brief Method ToString addr 0x2c9d5a8 size 0x8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeInferenceRuleAttribute(TypeInferenceRuleAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeInferenceRuleAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeInferenceRuleAttribute(TypeInferenceRuleAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeInferenceRuleAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::TypeInferenceRuleAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngineInternal
NEED_NO_BOX(::UnityEngineInternal::TypeInferenceRuleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::TypeInferenceRuleAttribute*, "UnityEngineInternal", "TypeInferenceRuleAttribute");
