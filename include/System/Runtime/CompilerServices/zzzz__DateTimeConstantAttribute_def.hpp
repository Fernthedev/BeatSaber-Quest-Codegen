#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__CustomConstantAttribute_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConstantAttribute)
namespace System {
class Object;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DateTimeConstantAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::DateTimeConstantAttribute);
// Type: System.Runtime.CompilerServices::DateTimeConstantAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3365))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3366))
// CS Name: ::System.Runtime.CompilerServices::DateTimeConstantAttribute*
class CORDL_TYPE DateTimeConstantAttribute : public ::System::Runtime::CompilerServices::CustomConstantAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Runtime::CompilerServices::CustomConstantAttribute)]{};

/// @brief Field _date offset 0x10
 __declspec(property(get=__get__date, put=__set__date)) ::System::DateTime  _date;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

constexpr void __set__date(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__date() ;

constexpr ::System::DateTime const& __get__date() const;

/// @brief Method get_Value addr 0x24daf38 size 0x5c virtual true final false
inline ::System::Object* get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConstantAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeConstantAttribute(DateTimeConstantAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConstantAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeConstantAttribute(DateTimeConstantAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DateTimeConstantAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::DateTimeConstantAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::DateTimeConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::DateTimeConstantAttribute*, "System.Runtime.CompilerServices", "DateTimeConstantAttribute");
