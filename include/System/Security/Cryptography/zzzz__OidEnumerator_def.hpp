#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OidEnumerator)
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Security::Cryptography {
class OidCollection;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Security::Cryptography {
class OidEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::OidEnumerator);
// Type: System.Security.Cryptography::OidEnumerator
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8974))
// CS Name: ::System.Security.Cryptography::OidEnumerator*
class CORDL_TYPE OidEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _oids offset 0x10
 __declspec(property(get=__get__oids, put=__set__oids)) ::System::Security::Cryptography::OidCollection*  _oids;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) int32_t  _current;

 __declspec(property(get=get_Current)) ::System::Security::Cryptography::Oid*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set__oids(::System::Security::Cryptography::OidCollection*  value) ;

constexpr ::System::Security::Cryptography::OidCollection* __get__oids() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::OidCollection*> __get__oids() const;

constexpr void __set__current(int32_t  value) ;

constexpr int32_t& __get__current() ;

constexpr int32_t const& __get__current() const;

static inline ::System::Security::Cryptography::OidEnumerator* New_ctor(::System::Security::Cryptography::OidCollection*  oids) ;

/// @brief Method .ctor addr 0x29760d0 size 0x30 virtual false final false
inline void _ctor(::System::Security::Cryptography::OidCollection*  oids) ;

/// @brief Method get_Current addr 0x29762cc size 0x20 virtual false final false
inline ::System::Security::Cryptography::Oid* get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x29762ec size 0x4 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x29762f0 size 0x50 virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2976340 size 0xc virtual true final true
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OidEnumerator(OidEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OidEnumerator(OidEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OidEnumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::OidEnumerator, 0x20>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::OidEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidEnumerator*, "System.Security.Cryptography", "OidEnumerator");
