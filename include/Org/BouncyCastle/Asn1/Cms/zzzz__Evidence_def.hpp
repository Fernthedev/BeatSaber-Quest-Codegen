#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Evidence)
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampTokenEvidence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::Evidence);
// Type: Org.BouncyCastle.Asn1.Cms::Evidence
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(73))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::Evidence*
class CORDL_TYPE Evidence : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field tstEvidence offset 0x10
 __declspec(property(get=__get_tstEvidence, put=__set_tstEvidence)) ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*  tstEvidence;

/// @brief Field otherEvidence offset 0x18
 __declspec(property(get=__get_otherEvidence, put=__set_otherEvidence)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  otherEvidence;

 __declspec(property(get=get_TstEvidence)) ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*  TstEvidence;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_tstEvidence(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* __get_tstEvidence() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*> __get_tstEvidence() const;

constexpr void __set_otherEvidence(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_otherEvidence() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_otherEvidence() const;

static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* New_ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*  tstEvidence) ;

/// @brief Method .ctor addr 0xe78118 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*  tstEvidence) ;

static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method .ctor addr 0xe78140 size 0xc8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method GetInstance addr 0xe78208 size 0x168 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0xe78370 size 0x1c virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method get_TstEvidence addr 0xe7838c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* get_TstEvidence() ;

/// @brief Method ToAsn1Object addr 0xe78394 size 0x94 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Evidence(Evidence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Evidence(Evidence const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Evidence()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Evidence, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Evidence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Evidence*, "Org.BouncyCastle.Asn1.Cms", "Evidence");
