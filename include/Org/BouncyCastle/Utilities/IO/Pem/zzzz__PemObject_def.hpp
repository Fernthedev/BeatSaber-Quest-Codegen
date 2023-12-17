#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PemObject)
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemObject);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemObject
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1806))
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemObject*
class CORDL_TYPE PemObject : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field headers offset 0x18
 __declspec(property(get=__get_headers, put=__set_headers)) ::System::Collections::IList*  headers;

/// @brief Field content offset 0x20
 __declspec(property(get=__get_content, put=__set_content)) ::ArrayW<uint8_t,::Array<uint8_t>*>  content;

 __declspec(property(get=get_Type)) ::StringW  Type;

 __declspec(property(get=get_Headers)) ::System::Collections::IList*  Headers;

 __declspec(property(get=get_Content)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Content;

/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
constexpr operator  ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*() noexcept;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

constexpr void __set_headers(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_headers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_headers() const;

constexpr void __set_content(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_content() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_content() const;

static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* New_ctor(::StringW  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  content) ;

/// @brief Method .ctor addr 0x115fa5c size 0x78 virtual false final false
inline void _ctor(::StringW  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  content) ;

static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* New_ctor(::StringW  type, ::System::Collections::IList*  headers, ::ArrayW<uint8_t,::Array<uint8_t>*>  content) ;

/// @brief Method .ctor addr 0x115fad4 size 0x8c virtual false final false
inline void _ctor(::StringW  type, ::System::Collections::IList*  headers, ::ArrayW<uint8_t,::Array<uint8_t>*>  content) ;

/// @brief Method get_Type addr 0x115fb60 size 0x8 virtual false final false
inline ::StringW get_Type() ;

/// @brief Method get_Headers addr 0x115fb68 size 0x8 virtual false final false
inline ::System::Collections::IList* get_Headers() ;

/// @brief Method get_Content addr 0x115fb70 size 0x8 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Content() ;

/// @brief Method Generate addr 0x115fb78 size 0x4 virtual true final true
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate() ;

// Ctor Parameters [CppParam { name: "", ty: "PemObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PemObject(PemObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PemObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PemObject(PemObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PemObject()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemObject, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, "Org.BouncyCastle.Utilities.IO.Pem", "PemObject");
