#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TspAlgorithms)
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspAlgorithms;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TspAlgorithms);
// Type: Org.BouncyCastle.Tsp::TspAlgorithms
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1773))
// CS Name: ::Org.BouncyCastle.Tsp::TspAlgorithms*
class CORDL_TYPE TspAlgorithms : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_MD5(::StringW  value) ;

static inline ::StringW getStaticF_MD5() ;

static inline void setStaticF_Sha1(::StringW  value) ;

static inline ::StringW getStaticF_Sha1() ;

static inline void setStaticF_Sha224(::StringW  value) ;

static inline ::StringW getStaticF_Sha224() ;

static inline void setStaticF_Sha256(::StringW  value) ;

static inline ::StringW getStaticF_Sha256() ;

static inline void setStaticF_Sha384(::StringW  value) ;

static inline ::StringW getStaticF_Sha384() ;

static inline void setStaticF_Sha512(::StringW  value) ;

static inline ::StringW getStaticF_Sha512() ;

static inline void setStaticF_RipeMD128(::StringW  value) ;

static inline ::StringW getStaticF_RipeMD128() ;

static inline void setStaticF_RipeMD160(::StringW  value) ;

static inline ::StringW getStaticF_RipeMD160() ;

static inline void setStaticF_RipeMD256(::StringW  value) ;

static inline ::StringW getStaticF_RipeMD256() ;

static inline void setStaticF_Gost3411(::StringW  value) ;

static inline ::StringW getStaticF_Gost3411() ;

static inline void setStaticF_Gost3411_2012_256(::StringW  value) ;

static inline ::StringW getStaticF_Gost3411_2012_256() ;

static inline void setStaticF_Gost3411_2012_512(::StringW  value) ;

static inline ::StringW getStaticF_Gost3411_2012_512() ;

static inline void setStaticF_SM3(::StringW  value) ;

static inline ::StringW getStaticF_SM3() ;

static inline void setStaticF_Allowed(::System::Collections::IList*  value) ;

static inline ::System::Collections::IList* getStaticF_Allowed() ;

static inline ::Org::BouncyCastle::Tsp::TspAlgorithms* New_ctor() ;

/// @brief Method .ctor addr 0x115453c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TspAlgorithms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TspAlgorithms(TspAlgorithms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TspAlgorithms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TspAlgorithms(TspAlgorithms const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TspAlgorithms()  = default;
public:


// Fields

// Static field MD5

// Static field Sha1

// Static field Sha224

// Static field Sha256

// Static field Sha384

// Static field Sha512

// Static field RipeMD128

// Static field RipeMD160

// Static field RipeMD256

// Static field Gost3411

// Static field Gost3411_2012_256

// Static field Gost3411_2012_512

// Static field SM3

// Static field Allowed


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TspAlgorithms, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspAlgorithms*, "Org.BouncyCastle.Tsp", "TspAlgorithms");
