#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WarningHeaderValue)
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System {
class ICloneable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class WarningHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::WarningHeaderValue);
// Type: System.Net.Http.Headers::WarningHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14711))
// CS Name: ::System.Net.Http.Headers::WarningHeaderValue*
class CORDL_TYPE WarningHeaderValue : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <Agent>k__BackingField offset 0x10
 __declspec(property(get=__get__Agent_k__BackingField, put=__set__Agent_k__BackingField)) ::StringW  _Agent_k__BackingField;

/// @brief Field <Code>k__BackingField offset 0x18
 __declspec(property(get=__get__Code_k__BackingField, put=__set__Code_k__BackingField)) int32_t  _Code_k__BackingField;

/// @brief Field <Date>k__BackingField offset 0x20
 __declspec(property(get=__get__Date_k__BackingField, put=__set__Date_k__BackingField)) ::System::Nullable_1<::System::DateTimeOffset>  _Date_k__BackingField;

/// @brief Field <Text>k__BackingField offset 0x38
 __declspec(property(get=__get__Text_k__BackingField, put=__set__Text_k__BackingField)) ::StringW  _Text_k__BackingField;

 __declspec(property(get=get_Agent, put=set_Agent)) ::StringW  Agent;

 __declspec(property(get=get_Code, put=set_Code)) int32_t  Code;

 __declspec(property(get=get_Date, put=set_Date)) ::System::Nullable_1<::System::DateTimeOffset>  Date;

 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

constexpr void __set__Agent_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Agent_k__BackingField() ;

constexpr ::StringW const& __get__Agent_k__BackingField() const;

constexpr void __set__Code_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__Code_k__BackingField() ;

constexpr int32_t const& __get__Code_k__BackingField() const;

constexpr void __set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset>  value) ;

constexpr ::System::Nullable_1<::System::DateTimeOffset>& __get__Date_k__BackingField() ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __get__Date_k__BackingField() const;

constexpr void __set__Text_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Text_k__BackingField() ;

constexpr ::StringW const& __get__Text_k__BackingField() const;

static inline ::System::Net::Http::Headers::WarningHeaderValue* New_ctor() ;

/// @brief Method .ctor addr 0x2842ca4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method get_Agent addr 0x2842cac size 0x8 virtual false final false
inline ::StringW get_Agent() ;

/// @brief Method set_Agent addr 0x2842cb4 size 0x8 virtual false final false
inline void set_Agent(::StringW  value) ;

/// @brief Method get_Code addr 0x2842cbc size 0x8 virtual false final false
inline int32_t get_Code() ;

/// @brief Method set_Code addr 0x2842cc4 size 0x8 virtual false final false
inline void set_Code(int32_t  value) ;

/// @brief Method get_Date addr 0x2842ccc size 0x14 virtual false final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_Date() ;

/// @brief Method set_Date addr 0x2842ce0 size 0x14 virtual false final false
inline void set_Date(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method get_Text addr 0x2842cf4 size 0x8 virtual false final false
inline ::StringW get_Text() ;

/// @brief Method set_Text addr 0x2842cfc size 0x8 virtual false final false
inline void set_Text(::StringW  value) ;

/// @brief Method IsCodeValid addr 0x2842d04 size 0xc virtual false final false
static inline bool IsCodeValid(int32_t  code) ;

/// @brief Method System.ICloneable.Clone addr 0x2842d10 size 0x8 virtual true final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x2842d18 size 0x158 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2842e70 size 0xe0 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x2842f50 size 0xb0 virtual false final false
static inline bool TryParse(::StringW  input, int32_t  minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*>  result) ;

/// @brief Method TryParseElement addr 0x2843000 size 0x28c virtual false final false
static inline bool TryParseElement(::System::Net::Http::Headers::Lexer*  lexer, ByRef<::System::Net::Http::Headers::WarningHeaderValue*>  parsedValue, ByRef<::System::Net::Http::Headers::Token>  t) ;

/// @brief Method ToString addr 0x284328c size 0x12a8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WarningHeaderValue(WarningHeaderValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WarningHeaderValue(WarningHeaderValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WarningHeaderValue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::WarningHeaderValue, 0x40>, "Size mismatch!");

} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::WarningHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::WarningHeaderValue*, "System.Net.Http.Headers", "WarningHeaderValue");
