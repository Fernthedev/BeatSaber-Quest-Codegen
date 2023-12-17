#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeNameAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeNameAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeNameAttribute);
// Type: UnityEngine.Bindings::NativeNameAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16015))
// CS Name: ::UnityEngine.Bindings::NativeNameAttribute*
class CORDL_TYPE NativeNameAttribute : public ::System::Attribute {
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

/// @brief Method set_Name addr 0x2d1837c size 0x8 virtual true final true
inline void set_Name(::StringW  value) ;

static inline ::UnityEngine::Bindings::NativeNameAttribute* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2d18384 size 0x104 virtual false final false
inline void _ctor(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeNameAttribute(NativeNameAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeNameAttribute(NativeNameAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeNameAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeNameAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeNameAttribute*, "UnityEngine.Bindings", "NativeNameAttribute");
