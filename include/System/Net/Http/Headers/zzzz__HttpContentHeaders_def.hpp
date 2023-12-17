#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContentHeaders)
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http::Headers {
class MediaTypeHeaderValue;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpContentHeaders);
// Type: System.Net.Http.Headers::HttpContentHeaders
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14672))
// CS Name: ::System.Net.Http.Headers::HttpContentHeaders*
class CORDL_TYPE HttpContentHeaders : public ::System::Net::Http::Headers::HttpHeaders {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Net::Http::Headers::HttpHeaders)]{};

/// @brief Field content offset 0x20
 __declspec(property(get=__get_content, put=__set_content)) ::System::Net::Http::HttpContent*  content;

 __declspec(property(get=get_ContentLength)) ::System::Nullable_1<int64_t>  ContentLength;

 __declspec(property(get=get_ContentType, put=set_ContentType)) ::System::Net::Http::Headers::MediaTypeHeaderValue*  ContentType;

constexpr void __set_content(::System::Net::Http::HttpContent*  value) ;

constexpr ::System::Net::Http::HttpContent* __get_content() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> __get_content() const;

static inline ::System::Net::Http::Headers::HttpContentHeaders* New_ctor(::System::Net::Http::HttpContent*  content) ;

/// @brief Method .ctor addr 0x28326c0 size 0x70 virtual false final false
inline void _ctor(::System::Net::Http::HttpContent*  content) ;

/// @brief Method get_ContentLength addr 0x28302c8 size 0x128 virtual false final false
inline ::System::Nullable_1<int64_t> get_ContentLength() ;

/// @brief Method get_ContentType addr 0x2833254 size 0x68 virtual false final false
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* get_ContentType() ;

/// @brief Method set_ContentType addr 0x2834888 size 0x74 virtual false final false
inline void set_ContentType(::System::Net::Http::Headers::MediaTypeHeaderValue*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpContentHeaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpContentHeaders(HttpContentHeaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpContentHeaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpContentHeaders(HttpContentHeaders const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpContentHeaders()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpContentHeaders, 0x28>, "Size mismatch!");

} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HttpContentHeaders);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpContentHeaders*, "System.Net.Http.Headers", "HttpContentHeaders");
