#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GuidAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class GuidAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::GuidAttribute);
// Type: System.Runtime.InteropServices::GuidAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3323))
// CS Name: ::System.Runtime.InteropServices::GuidAttribute*
class CORDL_TYPE GuidAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _val offset 0x10
 __declspec(property(get=__get__val, put=__set__val)) ::StringW  _val;

constexpr void __set__val(::StringW  value) ;

constexpr ::StringW& __get__val() ;

constexpr ::StringW const& __get__val() const;

static inline ::System::Runtime::InteropServices::GuidAttribute* New_ctor(::StringW  guid) ;

/// @brief Method .ctor addr 0x24d72a0 size 0x28 virtual false final false
inline void _ctor(::StringW  guid) ;

// Ctor Parameters [CppParam { name: "", ty: "GuidAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidAttribute(GuidAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidAttribute(GuidAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GuidAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GuidAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::GuidAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GuidAttribute*, "System.Runtime.InteropServices", "GuidAttribute");
