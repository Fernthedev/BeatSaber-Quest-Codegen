#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASN1)
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security {
class ASN1;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::ASN1);
// Type: Mono.Security::ASN1
namespace Mono::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13737))
// CS Name: ::Mono.Security::ASN1*
class CORDL_TYPE ASN1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_nTag offset 0x10
 __declspec(property(get=__get_m_nTag, put=__set_m_nTag)) uint8_t  m_nTag;

/// @brief Field m_aValue offset 0x18
 __declspec(property(get=__get_m_aValue, put=__set_m_aValue)) ::ArrayW<uint8_t,::Array<uint8_t>*>  m_aValue;

/// @brief Field elist offset 0x20
 __declspec(property(get=__get_elist, put=__set_elist)) ::System::Collections::ArrayList*  elist;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Tag)) uint8_t  Tag;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Value, put=set_Value)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Value;

 __declspec(property(get=get_Item)) ::Mono::Security::ASN1*  Item[];

constexpr void __set_m_nTag(uint8_t  value) ;

constexpr uint8_t& __get_m_nTag() ;

constexpr uint8_t const& __get_m_nTag() const;

constexpr void __set_m_aValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_m_aValue() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_m_aValue() const;

constexpr void __set_elist(::System::Collections::ArrayList*  value) ;

constexpr ::System::Collections::ArrayList* __get_elist() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> __get_elist() const;

static inline ::Mono::Security::ASN1* New_ctor(uint8_t  tag) ;

/// @brief Method .ctor addr 0x23ecb38 size 0x2c virtual false final false
inline void _ctor(uint8_t  tag) ;

static inline ::Mono::Security::ASN1* New_ctor(uint8_t  tag, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x23ecb64 size 0x30 virtual false final false
inline void _ctor(uint8_t  tag, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Mono::Security::ASN1* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x23ecb94 size 0x178 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method get_Count addr 0x23ece30 size 0x1c virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_Tag addr 0x23ece4c size 0x8 virtual false final false
inline uint8_t get_Tag() ;

/// @brief Method get_Length addr 0x23ece54 size 0x18 virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Value addr 0x23ece6c size 0x90 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Value() ;

/// @brief Method set_Value addr 0x23ecefc size 0xa8 virtual false final false
inline void set_Value(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method CompareArray addr 0x23ecfa4 size 0x74 virtual false final false
inline bool CompareArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array1, ::ArrayW<uint8_t,::Array<uint8_t>*>  array2) ;

/// @brief Method CompareValue addr 0x23ed018 size 0x10 virtual false final false
inline bool CompareValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method Add addr 0x23ed028 size 0x8c virtual false final false
inline ::Mono::Security::ASN1* Add(::Mono::Security::ASN1*  asn1) ;

/// @brief Method GetBytes addr 0x23ed0b4 size 0x698 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes() ;

/// @brief Method Decode addr 0x23ecd0c size 0x124 virtual false final false
inline void Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  asn1, ByRef<int32_t>  anPos, int32_t  anLength) ;

/// @brief Method DecodeTLV addr 0x23ed74c size 0x124 virtual false final false
inline void DecodeTLV(::ArrayW<uint8_t,::Array<uint8_t>*>  asn1, ByRef<int32_t>  pos, ByRef<uint8_t>  tag, ByRef<int32_t>  length, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  content) ;

/// @brief Method get_Item addr 0x23ed870 size 0x130 virtual false final false
inline ::Mono::Security::ASN1* get_Item(int32_t  index) ;

/// @brief Method Element addr 0x23ed9a0 size 0x154 virtual false final false
inline ::Mono::Security::ASN1* Element(int32_t  index, uint8_t  anTag) ;

/// @brief Method ToString addr 0x23edaf4 size 0x290 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ASN1(ASN1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ASN1(ASN1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ASN1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::ASN1, 0x28>, "Size mismatch!");

} // namespace end def Mono::Security
NEED_NO_BOX(::Mono::Security::ASN1);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::ASN1*, "Mono.Security", "ASN1");
