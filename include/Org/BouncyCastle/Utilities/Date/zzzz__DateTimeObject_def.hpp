#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DateTimeObject)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Date::DateTimeObject);
// Type: Org.BouncyCastle.Utilities.Date::DateTimeObject
namespace Org::BouncyCastle::Utilities::Date {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1791))
// CS Name: ::Org.BouncyCastle.Utilities.Date::DateTimeObject*
class CORDL_TYPE DateTimeObject : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field dt offset 0x10
 __declspec(property(get=__get_dt, put=__set_dt)) ::System::DateTime  dt;

 __declspec(property(get=get_Value)) ::System::DateTime  Value;

constexpr void __set_dt(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_dt() ;

constexpr ::System::DateTime const& __get_dt() const;

static inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* New_ctor(::System::DateTime  dt) ;

/// @brief Method .ctor addr 0x11514f8 size 0x28 virtual false final false
inline void _ctor(::System::DateTime  dt) ;

/// @brief Method get_Value addr 0x115b714 size 0x8 virtual false final false
inline ::System::DateTime get_Value() ;

/// @brief Method ToString addr 0x115b71c size 0x20 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeObject(DateTimeObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeObject(DateTimeObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DateTimeObject()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Date::DateTimeObject, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Date
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Date::DateTimeObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Date::DateTimeObject*, "Org.BouncyCastle.Utilities.Date", "DateTimeObject");
