#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacroAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class MacroAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::MacroAttribute);
// Type: JetBrains.Annotations::MacroAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15759))
// CS Name: ::JetBrains.Annotations::MacroAttribute*
class CORDL_TYPE MacroAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Attribute)]{};

/// @brief Field <Expression>k__BackingField offset 0x10
 __declspec(property(get=__get__Expression_k__BackingField, put=__set__Expression_k__BackingField)) ::StringW  _Expression_k__BackingField;

/// @brief Field <Editable>k__BackingField offset 0x18
 __declspec(property(get=__get__Editable_k__BackingField, put=__set__Editable_k__BackingField)) int32_t  _Editable_k__BackingField;

/// @brief Field <Target>k__BackingField offset 0x20
 __declspec(property(get=__get__Target_k__BackingField, put=__set__Target_k__BackingField)) ::StringW  _Target_k__BackingField;

 __declspec(property(get=get_Expression, put=set_Expression)) ::StringW  Expression;

 __declspec(property(get=get_Editable, put=set_Editable)) int32_t  Editable;

 __declspec(property(get=get_Target, put=set_Target)) ::StringW  Target;

constexpr void __set__Expression_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Expression_k__BackingField() ;

constexpr ::StringW const& __get__Expression_k__BackingField() const;

constexpr void __set__Editable_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__Editable_k__BackingField() ;

constexpr int32_t const& __get__Editable_k__BackingField() const;

constexpr void __set__Target_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Target_k__BackingField() ;

constexpr ::StringW const& __get__Target_k__BackingField() const;

/// @brief Method get_Expression addr 0x2eba3bc size 0x8 virtual false final false
inline ::StringW get_Expression() ;

/// @brief Method set_Expression addr 0x2eba3c4 size 0x8 virtual false final false
inline void set_Expression(::StringW  value) ;

/// @brief Method get_Editable addr 0x2eba3cc size 0x8 virtual false final false
inline int32_t get_Editable() ;

/// @brief Method set_Editable addr 0x2eba3d4 size 0x8 virtual false final false
inline void set_Editable(int32_t  value) ;

/// @brief Method get_Target addr 0x2eba3dc size 0x8 virtual false final false
inline ::StringW get_Target() ;

/// @brief Method set_Target addr 0x2eba3e4 size 0x8 virtual false final false
inline void set_Target(::StringW  value) ;

static inline ::JetBrains::Annotations::MacroAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba3ec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacroAttribute(MacroAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacroAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacroAttribute(MacroAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MacroAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::MacroAttribute, 0x28>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::MacroAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MacroAttribute*, "JetBrains.Annotations", "MacroAttribute");
