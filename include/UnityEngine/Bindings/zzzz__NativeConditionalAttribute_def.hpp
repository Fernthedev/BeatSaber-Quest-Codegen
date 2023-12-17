#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeConditionalAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeConditionalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeConditionalAttribute);
// Type: UnityEngine.Bindings::NativeConditionalAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16013))
// CS Name: ::UnityEngine.Bindings::NativeConditionalAttribute*
class CORDL_TYPE NativeConditionalAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <Condition>k__BackingField offset 0x10
 __declspec(property(get=__get__Condition_k__BackingField, put=__set__Condition_k__BackingField)) ::StringW  _Condition_k__BackingField;

/// @brief Field <Enabled>k__BackingField offset 0x18
 __declspec(property(get=__get__Enabled_k__BackingField, put=__set__Enabled_k__BackingField)) bool  _Enabled_k__BackingField;

 __declspec(property(put=set_Condition)) ::StringW  Condition;

 __declspec(property(put=set_Enabled)) bool  Enabled;

constexpr void __set__Condition_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Condition_k__BackingField() ;

constexpr ::StringW const& __get__Condition_k__BackingField() const;

constexpr void __set__Enabled_k__BackingField(bool  value) ;

constexpr bool& __get__Enabled_k__BackingField() ;

constexpr bool const& __get__Enabled_k__BackingField() const;

/// @brief Method set_Condition addr 0x2d1822c size 0x8 virtual false final false
inline void set_Condition(::StringW  value) ;

/// @brief Method set_Enabled addr 0x2d18234 size 0xc virtual false final false
inline void set_Enabled(bool  value) ;

static inline ::UnityEngine::Bindings::NativeConditionalAttribute* New_ctor(::StringW  condition) ;

/// @brief Method .ctor addr 0x2d18240 size 0x30 virtual false final false
inline void _ctor(::StringW  condition) ;

// Ctor Parameters [CppParam { name: "", ty: "NativeConditionalAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeConditionalAttribute(NativeConditionalAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeConditionalAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeConditionalAttribute(NativeConditionalAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeConditionalAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeConditionalAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeConditionalAttribute*, "UnityEngine.Bindings", "NativeConditionalAttribute");
