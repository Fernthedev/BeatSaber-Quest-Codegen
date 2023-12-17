#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKMacFactory)
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PKMacFactory);
// Type: Org.BouncyCastle.Crmf::PKMacFactory
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(708))
// CS Name: ::Org.BouncyCastle.Crmf::PKMacFactory*
class CORDL_TYPE PKMacFactory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field parameters offset 0x10
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  parameters;

/// @brief Field key offset 0x18
 __declspec(property(get=__get_key, put=__set_key)) ::ArrayW<uint8_t,::Array<uint8_t>*>  key;

 __declspec(property(get=get_AlgorithmDetails)) ::System::Object*  AlgorithmDetails;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacFactory"
constexpr operator  ::Org::BouncyCastle::Crypto::IMacFactory*() noexcept;

constexpr void __set_parameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*> __get_parameters() const;

constexpr void __set_key(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_key() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_key() const;

static inline ::Org::BouncyCastle::Crmf::PKMacFactory* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  parameters) ;

/// @brief Method .ctor addr 0x1211fdc size 0x7c virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  parameters) ;

/// @brief Method get_AlgorithmDetails addr 0x1212058 size 0x9c virtual true final false
inline ::System::Object* get_AlgorithmDetails() ;

/// @brief Method CreateCalculator addr 0x12120f4 size 0x174 virtual true final false
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator() ;

// Ctor Parameters [CppParam { name: "", ty: "PKMacFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PKMacFactory(PKMacFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKMacFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKMacFactory(PKMacFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PKMacFactory()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PKMacFactory, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PKMacFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PKMacFactory*, "Org.BouncyCastle.Crmf", "PKMacFactory");
