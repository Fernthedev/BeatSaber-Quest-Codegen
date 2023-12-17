#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemberPrimitiveUnTyped)
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped);
// Type: System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveUnTyped
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3271))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveUnTyped*
class CORDL_TYPE MemberPrimitiveUnTyped : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field typeInformation offset 0x10
 __declspec(property(get=__get_typeInformation, put=__set_typeInformation)) ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  typeInformation;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::System::Object*  value;

constexpr void __set_typeInformation(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __get_typeInformation() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __get_typeInformation() const;

constexpr void __set_value(::System::Object*  value) ;

constexpr ::System::Object* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_value() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* New_ctor() ;

/// @brief Method .ctor addr 0x24c32f8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Set addr 0x24c3300 size 0xc virtual false final false
inline void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  typeInformation, ::System::Object*  value) ;

/// @brief Method Set addr 0x24c330c size 0x8 virtual false final false
inline void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  typeInformation) ;

/// @brief Method Write addr 0x24c3314 size 0x24 virtual true final true
inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*  sout) ;

/// @brief Method Read addr 0x24c3338 size 0x30 virtual true final true
inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*  input) ;

/// @brief Method Dump addr 0x24c3368 size 0x4 virtual false final false
inline void Dump() ;

// Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveUnTyped", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemberPrimitiveUnTyped(MemberPrimitiveUnTyped && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveUnTyped", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemberPrimitiveUnTyped(MemberPrimitiveUnTyped const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemberPrimitiveUnTyped()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
