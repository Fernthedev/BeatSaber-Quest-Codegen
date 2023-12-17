#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameValueWithParametersHeaderValue)
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class NameValueWithParametersHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::NameValueWithParametersHeaderValue);
// Type: System.Net.Http.Headers::NameValueWithParametersHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14688))
// CS Name: ::System.Net.Http.Headers::NameValueWithParametersHeaderValue*
class CORDL_TYPE NameValueWithParametersHeaderValue : public ::System::Net::Http::Headers::NameValueHeaderValue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Net::Http::Headers::NameValueHeaderValue)]{};

/// @brief Field parameters offset 0x20
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*  parameters;

 __declspec(property(get=get_Parameters)) ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*  Parameters;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

constexpr void __set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> __get_parameters() const;

static inline ::System::Net::Http::Headers::NameValueWithParametersHeaderValue* New_ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue*  source) ;

/// @brief Method .ctor addr 0x283e1a8 size 0x1ec virtual false final false
inline void _ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue*  source) ;

static inline ::System::Net::Http::Headers::NameValueWithParametersHeaderValue* New_ctor() ;

/// @brief Method .ctor addr 0x283e414 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method get_Parameters addr 0x283e394 size 0x80 virtual false final false
inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters() ;

/// @brief Method System.ICloneable.Clone addr 0x283e41c size 0x60 virtual true final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x283e47c size 0xc0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x283e53c size 0x60 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x283e59c size 0x94 virtual true final false
inline ::StringW ToString() ;

/// @brief Method TryParse addr 0x283e630 size 0xb0 virtual false final false
static inline bool TryParse(::StringW  input, int32_t  minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*>  result) ;

/// @brief Method TryParseElement addr 0x283e6e0 size 0x1dc virtual false final false
static inline bool TryParseElement(::System::Net::Http::Headers::Lexer*  lexer, ByRef<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>  parsedValue, ByRef<::System::Net::Http::Headers::Token>  t) ;

// Ctor Parameters [CppParam { name: "", ty: "NameValueWithParametersHeaderValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NameValueWithParametersHeaderValue(NameValueWithParametersHeaderValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameValueWithParametersHeaderValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameValueWithParametersHeaderValue(NameValueWithParametersHeaderValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NameValueWithParametersHeaderValue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::NameValueWithParametersHeaderValue, 0x28>, "Size mismatch!");

} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::NameValueWithParametersHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::NameValueWithParametersHeaderValue*, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue");
