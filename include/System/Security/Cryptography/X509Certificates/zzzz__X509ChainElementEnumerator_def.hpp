#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509ChainElementEnumerator)
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator);
// Type: System.Security.Cryptography.X509Certificates::X509ChainElementEnumerator
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9005))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainElementEnumerator*
class CORDL_TYPE X509ChainElementEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field enumerator offset 0x10
 __declspec(property(get=__get_enumerator, put=__set_enumerator)) ::System::Collections::IEnumerator*  enumerator;

 __declspec(property(get=get_Current)) ::System::Security::Cryptography::X509Certificates::X509ChainElement*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set_enumerator(::System::Collections::IEnumerator*  value) ;

constexpr ::System::Collections::IEnumerator* __get_enumerator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> __get_enumerator() const;

static inline ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* New_ctor(::System::Collections::IEnumerable*  enumerable) ;

/// @brief Method .ctor addr 0x298033c size 0xb4 virtual false final false
inline void _ctor(::System::Collections::IEnumerable*  enumerable) ;

/// @brief Method get_Current addr 0x298060c size 0xf0 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509ChainElement* get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x29806fc size 0xa4 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x29807a0 size 0xa0 virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2980840 size 0xa4 virtual true final true
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElementEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509ChainElementEnumerator(X509ChainElementEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElementEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509ChainElementEnumerator(X509ChainElementEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509ChainElementEnumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator, 0x18>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*, "System.Security.Cryptography.X509Certificates", "X509ChainElementEnumerator");
