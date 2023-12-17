#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Features)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Features;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::Features);
// Type: Org.BouncyCastle.Bcpg.Sig::Features
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(534))
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::Features*
class CORDL_TYPE Features : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Bcpg::SignatureSubpacket)]{};

 __declspec(property(get=get_SupportsModificationDetection)) bool  SupportsModificationDetection;

static inline void setStaticF_FEATURE_MODIFICATION_DETECTION(uint8_t  value) ;

static inline uint8_t getStaticF_FEATURE_MODIFICATION_DETECTION() ;

/// @brief Method FeatureToByteArray addr 0x11c7590 size 0x64 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FeatureToByteArray(uint8_t  feature) ;

static inline ::Org::BouncyCastle::Bcpg::Sig::Features* New_ctor(bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x11c75f4 size 0x48 virtual false final false
inline void _ctor(bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::Sig::Features* New_ctor(bool  critical, uint8_t  feature) ;

/// @brief Method .ctor addr 0x11c763c size 0x90 virtual false final false
inline void _ctor(bool  critical, uint8_t  feature) ;

/// @brief Method get_SupportsModificationDetection addr 0x11c76cc size 0x60 virtual false final false
inline bool get_SupportsModificationDetection() ;

/// @brief Method SupportsFeature addr 0x11c772c size 0x78 virtual false final false
inline bool SupportsFeature(uint8_t  feature) ;

/// @brief Method SetSupportsFeature addr 0x11c77a4 size 0x1b4 virtual false final false
inline void SetSupportsFeature(uint8_t  feature, bool  support) ;

// Ctor Parameters [CppParam { name: "", ty: "Features", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Features(Features && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Features", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Features(Features const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Features()  = default;
public:


// Fields

// Static field FEATURE_MODIFICATION_DETECTION


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::Features, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::Features);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::Features*, "Org.BouncyCastle.Bcpg.Sig", "Features");
