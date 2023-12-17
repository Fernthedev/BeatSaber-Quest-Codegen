#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UsedByNativeCodeAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class UsedByNativeCodeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::UsedByNativeCodeAttribute);
// Type: UnityEngine.Scripting::UsedByNativeCodeAttribute
namespace UnityEngine::Scripting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16010))
// CS Name: ::UnityEngine.Scripting::UsedByNativeCodeAttribute*
class CORDL_TYPE UsedByNativeCodeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Name>k__BackingField offset 0x10
 __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

 __declspec(property(put=set_Name)) ::StringW  Name;

constexpr void __set__Name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Name_k__BackingField() ;

constexpr ::StringW const& __get__Name_k__BackingField() const;

static inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2d18194 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2d1819c size 0x28 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method set_Name addr 0x2d181c4 size 0x8 virtual false final false
inline void set_Name(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UsedByNativeCodeAttribute(UsedByNativeCodeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UsedByNativeCodeAttribute(UsedByNativeCodeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UsedByNativeCodeAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::UsedByNativeCodeAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::UsedByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::UsedByNativeCodeAttribute*, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
