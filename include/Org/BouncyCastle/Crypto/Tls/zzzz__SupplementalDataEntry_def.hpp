#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupplementalDataEntry)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SupplementalDataEntry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry);
// Type: Org.BouncyCastle.Crypto.Tls::SupplementalDataEntry
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1284))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SupplementalDataEntry*
class CORDL_TYPE SupplementalDataEntry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field mDataType offset 0x10
 __declspec(property(get=__get_mDataType, put=__set_mDataType)) int32_t  mDataType;

/// @brief Field mData offset 0x18
 __declspec(property(get=__get_mData, put=__set_mData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mData;

 __declspec(property(get=get_DataType)) int32_t  DataType;

 __declspec(property(get=get_Data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Data;

constexpr void __set_mDataType(int32_t  value) ;

constexpr int32_t& __get_mDataType() ;

constexpr int32_t const& __get_mDataType() const;

constexpr void __set_mData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mData() const;

static inline ::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry* New_ctor(int32_t  dataType, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0xf98834 size 0x30 virtual false final false
inline void _ctor(int32_t  dataType, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method get_DataType addr 0xf98864 size 0x8 virtual true final false
inline int32_t get_DataType() ;

/// @brief Method get_Data addr 0xf9886c size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Data() ;

// Ctor Parameters [CppParam { name: "", ty: "SupplementalDataEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SupplementalDataEntry(SupplementalDataEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupplementalDataEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupplementalDataEntry(SupplementalDataEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SupplementalDataEntry()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SupplementalDataEntry*, "Org.BouncyCastle.Crypto.Tls", "SupplementalDataEntry");
