#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumValue_1)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename T>
class EnumValue_1;
}
namespace Newtonsoft::Json::Utilities {
template<>
class EnumValue_1<uint64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::EnumValue_1);
// Type: Newtonsoft.Json.Utilities::EnumValue`1
// Type: Newtonsoft.Json.Utilities::EnumValue`1
namespace Newtonsoft::Json::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11887)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11887), inst: 407 })
// CS Name: ::Newtonsoft.Json.Utilities::EnumValue`1<T>*
class CORDL_TYPE EnumValue_1<uint64_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _name offset 0x10
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _value offset 0x18
 __declspec(property(get=__get__value, put=__set__value)) uint64_t  _value;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Value)) uint64_t  Value;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__value(uint64_t  value) ;

constexpr uint64_t& __get__value() ;

constexpr uint64_t const& __get__value() const;

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_Name() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t get_Value() ;

static inline ::Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>* New_ctor(::StringW  name, uint64_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, uint64_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "EnumValue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumValue_1(EnumValue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumValue_1(EnumValue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumValue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::EnumValue_1, "Newtonsoft.Json.Utilities", "EnumValue`1");
