#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpEncryptedDataList)
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedData;
}
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataList
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1643))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataList*
class CORDL_TYPE PgpEncryptedDataList : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::IList*  list;

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::Org::BouncyCastle::Bcpg::InputStreamPacket*  data;

 __declspec(property(get=get_Item)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*  Item[];

 __declspec(property(get=get_Size)) int32_t  Size;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set_list(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_list() const;

constexpr void __set_data(::Org::BouncyCastle::Bcpg::InputStreamPacket*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::InputStreamPacket* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::InputStreamPacket*> __get_data() const;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgInput) ;

/// @brief Method .ctor addr 0x10ace60 size 0x55c virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgInput) ;

/// @brief Method get_Item addr 0x10ad3ec size 0xf4 virtual false final false
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData* get_Item(int32_t  index) ;

/// @brief Method Get addr 0x10ad4e0 size 0x4 virtual false final false
inline ::System::Object* Get(int32_t  index) ;

/// @brief Method get_Size addr 0x10ad4e4 size 0xa4 virtual false final false
inline int32_t get_Size() ;

/// @brief Method get_Count addr 0x10ad588 size 0xa4 virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty addr 0x10ad62c size 0xb0 virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method GetEncryptedDataObjects addr 0x10ad6dc size 0x68 virtual false final false
inline ::System::Collections::IEnumerable* GetEncryptedDataObjects() ;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpEncryptedDataList(PgpEncryptedDataList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpEncryptedDataList(PgpEncryptedDataList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PgpEncryptedDataList()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataList");
