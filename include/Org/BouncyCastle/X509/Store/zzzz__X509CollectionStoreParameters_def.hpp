#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509CollectionStoreParameters)
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::X509::Store {
class IX509StoreParameters;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CollectionStoreParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters);
// Type: Org.BouncyCastle.X509.Store::X509CollectionStoreParameters
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1849))
// CS Name: ::Org.BouncyCastle.X509.Store::X509CollectionStoreParameters*
class CORDL_TYPE X509CollectionStoreParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field collection offset 0x10
 __declspec(property(get=__get_collection, put=__set_collection)) ::System::Collections::IList*  collection;

/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509StoreParameters"
constexpr operator  ::Org::BouncyCastle::X509::Store::IX509StoreParameters*() noexcept;

constexpr void __set_collection(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_collection() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_collection() const;

static inline ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters* New_ctor(::System::Collections::ICollection*  collection) ;

/// @brief Method .ctor addr 0x1171b0c size 0xbc virtual false final false
inline void _ctor(::System::Collections::ICollection*  collection) ;

/// @brief Method GetCollection addr 0x1171bc8 size 0x58 virtual false final false
inline ::System::Collections::ICollection* GetCollection() ;

/// @brief Method ToString addr 0x1171c20 size 0x108 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "X509CollectionStoreParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509CollectionStoreParameters(X509CollectionStoreParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509CollectionStoreParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509CollectionStoreParameters(X509CollectionStoreParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509CollectionStoreParameters()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*, "Org.BouncyCastle.X509.Store", "X509CollectionStoreParameters");
