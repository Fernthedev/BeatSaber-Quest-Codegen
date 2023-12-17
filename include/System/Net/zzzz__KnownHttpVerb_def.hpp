#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KnownHttpVerb)
namespace System::Collections::Specialized {
class ListDictionary;
}
// Forward declare root types
namespace System::Net {
class KnownHttpVerb;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::KnownHttpVerb);
// Type: System.Net::KnownHttpVerb
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9079))
// CS Name: ::System.Net::KnownHttpVerb*
class CORDL_TYPE KnownHttpVerb : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Name offset 0x10
 __declspec(property(get=__get_Name, put=__set_Name)) ::StringW  Name;

/// @brief Field RequireContentBody offset 0x18
 __declspec(property(get=__get_RequireContentBody, put=__set_RequireContentBody)) bool  RequireContentBody;

/// @brief Field ContentBodyNotAllowed offset 0x19
 __declspec(property(get=__get_ContentBodyNotAllowed, put=__set_ContentBodyNotAllowed)) bool  ContentBodyNotAllowed;

/// @brief Field ConnectRequest offset 0x1a
 __declspec(property(get=__get_ConnectRequest, put=__set_ConnectRequest)) bool  ConnectRequest;

/// @brief Field ExpectNoContentResponse offset 0x1b
 __declspec(property(get=__get_ExpectNoContentResponse, put=__set_ExpectNoContentResponse)) bool  ExpectNoContentResponse;

constexpr void __set_Name(::StringW  value) ;

constexpr ::StringW& __get_Name() ;

constexpr ::StringW const& __get_Name() const;

constexpr void __set_RequireContentBody(bool  value) ;

constexpr bool& __get_RequireContentBody() ;

constexpr bool const& __get_RequireContentBody() const;

constexpr void __set_ContentBodyNotAllowed(bool  value) ;

constexpr bool& __get_ContentBodyNotAllowed() ;

constexpr bool const& __get_ContentBodyNotAllowed() const;

constexpr void __set_ConnectRequest(bool  value) ;

constexpr bool& __get_ConnectRequest() ;

constexpr bool const& __get_ConnectRequest() const;

constexpr void __set_ExpectNoContentResponse(bool  value) ;

constexpr bool& __get_ExpectNoContentResponse() ;

constexpr bool const& __get_ExpectNoContentResponse() const;

static inline void setStaticF_NamedHeaders(::System::Collections::Specialized::ListDictionary*  value) ;

static inline ::System::Collections::Specialized::ListDictionary* getStaticF_NamedHeaders() ;

static inline void setStaticF_Get(::System::Net::KnownHttpVerb*  value) ;

static inline ::System::Net::KnownHttpVerb* getStaticF_Get() ;

static inline void setStaticF_Connect(::System::Net::KnownHttpVerb*  value) ;

static inline ::System::Net::KnownHttpVerb* getStaticF_Connect() ;

static inline void setStaticF_Head(::System::Net::KnownHttpVerb*  value) ;

static inline ::System::Net::KnownHttpVerb* getStaticF_Head() ;

static inline void setStaticF_Put(::System::Net::KnownHttpVerb*  value) ;

static inline ::System::Net::KnownHttpVerb* getStaticF_Put() ;

static inline void setStaticF_Post(::System::Net::KnownHttpVerb*  value) ;

static inline ::System::Net::KnownHttpVerb* getStaticF_Post() ;

static inline void setStaticF_MkCol(::System::Net::KnownHttpVerb*  value) ;

static inline ::System::Net::KnownHttpVerb* getStaticF_MkCol() ;

static inline ::System::Net::KnownHttpVerb* New_ctor(::StringW  name, bool  requireContentBody, bool  contentBodyNotAllowed, bool  connectRequest, bool  expectNoContentResponse) ;

/// @brief Method .ctor addr 0x299e5c0 size 0x58 virtual false final false
inline void _ctor(::StringW  name, bool  requireContentBody, bool  contentBodyNotAllowed, bool  connectRequest, bool  expectNoContentResponse) ;

/// @brief Method Parse addr 0x299e930 size 0xc8 virtual false final false
static inline ::System::Net::KnownHttpVerb* Parse(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "KnownHttpVerb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KnownHttpVerb(KnownHttpVerb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KnownHttpVerb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KnownHttpVerb(KnownHttpVerb const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KnownHttpVerb()  = default;
public:


// Fields

// Static field NamedHeaders

// Static field Get

// Static field Connect

// Static field Head

// Static field Put

// Static field Post

// Static field MkCol


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::KnownHttpVerb, 0x20>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::KnownHttpVerb);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::KnownHttpVerb*, "System.Net", "KnownHttpVerb");
