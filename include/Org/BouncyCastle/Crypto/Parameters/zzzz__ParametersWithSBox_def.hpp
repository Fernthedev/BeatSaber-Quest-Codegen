#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParametersWithSBox)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithSBox;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox);
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithSBox
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1075))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ParametersWithSBox*
class CORDL_TYPE ParametersWithSBox : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field parameters offset 0x10
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters;

/// @brief Field sBox offset 0x18
 __declspec(property(get=__get_sBox, put=__set_sBox)) ::ArrayW<uint8_t,::Array<uint8_t>*>  sBox;

 __declspec(property(get=get_Parameters)) ::Org::BouncyCastle::Crypto::ICipherParameters*  Parameters;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> __get_parameters() const;

constexpr void __set_sBox(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_sBox() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_sBox() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters, ::ArrayW<uint8_t,::Array<uint8_t>*>  sBox) ;

/// @brief Method .ctor addr 0xf39370 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters, ::ArrayW<uint8_t,::Array<uint8_t>*>  sBox) ;

/// @brief Method GetSBox addr 0xf3939c size 0x8 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSBox() ;

/// @brief Method get_Parameters addr 0xf393a4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters() ;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithSBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParametersWithSBox(ParametersWithSBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithSBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParametersWithSBox(ParametersWithSBox const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParametersWithSBox()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithSBox");
