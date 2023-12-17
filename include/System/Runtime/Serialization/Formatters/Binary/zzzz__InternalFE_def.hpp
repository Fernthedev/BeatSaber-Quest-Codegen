#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InternalFE)
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalSerializerTypeE;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System::Runtime::Serialization::Formatters {
struct TypeFilterLevel;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::InternalFE);
// Type: System.Runtime.Serialization.Formatters.Binary::InternalFE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3297))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::InternalFE*
class CORDL_TYPE InternalFE : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field FEtypeFormat offset 0x10
 __declspec(property(get=__get_FEtypeFormat, put=__set_FEtypeFormat)) ::System::Runtime::Serialization::Formatters::FormatterTypeStyle  FEtypeFormat;

/// @brief Field FEassemblyFormat offset 0x14
 __declspec(property(get=__get_FEassemblyFormat, put=__set_FEassemblyFormat)) ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle  FEassemblyFormat;

/// @brief Field FEsecurityLevel offset 0x18
 __declspec(property(get=__get_FEsecurityLevel, put=__set_FEsecurityLevel)) ::System::Runtime::Serialization::Formatters::TypeFilterLevel  FEsecurityLevel;

/// @brief Field FEserializerTypeEnum offset 0x1c
 __declspec(property(get=__get_FEserializerTypeEnum, put=__set_FEserializerTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE  FEserializerTypeEnum;

constexpr void __set_FEtypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle  value) ;

constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& __get_FEtypeFormat() ;

constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& __get_FEtypeFormat() const;

constexpr void __set_FEassemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle  value) ;

constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& __get_FEassemblyFormat() ;

constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const& __get_FEassemblyFormat() const;

constexpr void __set_FEsecurityLevel(::System::Runtime::Serialization::Formatters::TypeFilterLevel  value) ;

constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel& __get_FEsecurityLevel() ;

constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel const& __get_FEsecurityLevel() const;

constexpr void __set_FEserializerTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE& __get_FEserializerTypeEnum() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE const& __get_FEserializerTypeEnum() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::InternalFE* New_ctor() ;

/// @brief Method .ctor addr 0x24d6180 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalFE(InternalFE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalFE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalFE(InternalFE const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InternalFE()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalFE, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::InternalFE);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalFE*, "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
