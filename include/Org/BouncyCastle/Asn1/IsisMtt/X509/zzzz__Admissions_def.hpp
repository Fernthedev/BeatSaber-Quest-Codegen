#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Admissions)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProfessionInfo;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class Admissions;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::Admissions
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(183))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::Admissions*
class CORDL_TYPE Admissions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field admissionAuthority offset 0x10
 __declspec(property(get=__get_admissionAuthority, put=__set_admissionAuthority)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  admissionAuthority;

/// @brief Field namingAuthority offset 0x18
 __declspec(property(get=__get_namingAuthority, put=__set_namingAuthority)) ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*  namingAuthority;

/// @brief Field professionInfos offset 0x20
 __declspec(property(get=__get_professionInfos, put=__set_professionInfos)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  professionInfos;

 __declspec(property(get=get_AdmissionAuthority)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  AdmissionAuthority;

 __declspec(property(get=get_NamingAuthority)) ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*  NamingAuthority;

constexpr void __set_admissionAuthority(::Org::BouncyCastle::Asn1::X509::GeneralName*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* __get_admissionAuthority() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> __get_admissionAuthority() const;

constexpr void __set_namingAuthority(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*  value) ;

constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* __get_namingAuthority() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*> __get_namingAuthority() const;

constexpr void __set_professionInfos(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_professionInfos() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_professionInfos() const;

/// @brief Method GetInstance addr 0xf769d8 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf76b60 size 0x6dc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName*  admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*  namingAuthority, ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*,::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*>  professionInfos) ;

/// @brief Method .ctor addr 0xf772b4 size 0x90 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName*  admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*  namingAuthority, ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*,::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*>  professionInfos) ;

/// @brief Method get_AdmissionAuthority addr 0xf77344 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_AdmissionAuthority() ;

/// @brief Method get_NamingAuthority addr 0xf7734c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* get_NamingAuthority() ;

/// @brief Method GetProfessionInfos addr 0xf77354 size 0x3a0 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*,::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*> GetProfessionInfos() ;

/// @brief Method ToAsn1Object addr 0xf7787c size 0xd0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Admissions(Admissions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Admissions(Admissions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Admissions()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "Admissions");
