#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InfBlocks)
namespace Org::BouncyCastle::Utilities::Zlib {
class InfTree;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class InfCodes;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::InfBlocks);
// Type: Org.BouncyCastle.Utilities.Zlib::InfBlocks
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1820))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::InfBlocks*
class CORDL_TYPE InfBlocks : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field MANY offset 0x0
static constexpr int32_t  MANY{static_cast<int32_t>(0x5a0)};

/// @brief Field Z_OK offset 0x0
static constexpr int32_t  Z_OK{static_cast<int32_t>(0x0)};

/// @brief Field Z_STREAM_END offset 0x0
static constexpr int32_t  Z_STREAM_END{static_cast<int32_t>(0x1)};

/// @brief Field Z_NEED_DICT offset 0x0
static constexpr int32_t  Z_NEED_DICT{static_cast<int32_t>(0x2)};

/// @brief Field Z_ERRNO offset 0x0
static constexpr int32_t  Z_ERRNO{static_cast<int32_t>(0xffffffff)};

/// @brief Field Z_STREAM_ERROR offset 0x0
static constexpr int32_t  Z_STREAM_ERROR{static_cast<int32_t>(0xfffffffe)};

/// @brief Field Z_DATA_ERROR offset 0x0
static constexpr int32_t  Z_DATA_ERROR{static_cast<int32_t>(0xfffffffd)};

/// @brief Field Z_MEM_ERROR offset 0x0
static constexpr int32_t  Z_MEM_ERROR{static_cast<int32_t>(0xfffffffc)};

/// @brief Field Z_BUF_ERROR offset 0x0
static constexpr int32_t  Z_BUF_ERROR{static_cast<int32_t>(0xfffffffb)};

/// @brief Field Z_VERSION_ERROR offset 0x0
static constexpr int32_t  Z_VERSION_ERROR{static_cast<int32_t>(0xfffffffa)};

/// @brief Field TYPE offset 0x0
static constexpr int32_t  TYPE{static_cast<int32_t>(0x0)};

/// @brief Field LENS offset 0x0
static constexpr int32_t  LENS{static_cast<int32_t>(0x1)};

/// @brief Field STORED offset 0x0
static constexpr int32_t  STORED{static_cast<int32_t>(0x2)};

/// @brief Field TABLE offset 0x0
static constexpr int32_t  TABLE{static_cast<int32_t>(0x3)};

/// @brief Field BTREE offset 0x0
static constexpr int32_t  BTREE{static_cast<int32_t>(0x4)};

/// @brief Field DTREE offset 0x0
static constexpr int32_t  DTREE{static_cast<int32_t>(0x5)};

/// @brief Field CODES offset 0x0
static constexpr int32_t  CODES{static_cast<int32_t>(0x6)};

/// @brief Field DRY offset 0x0
static constexpr int32_t  DRY{static_cast<int32_t>(0x7)};

/// @brief Field DONE offset 0x0
static constexpr int32_t  DONE{static_cast<int32_t>(0x8)};

/// @brief Field BAD offset 0x0
static constexpr int32_t  BAD{static_cast<int32_t>(0x9)};

/// @brief Field mode offset 0x10
 __declspec(property(get=__get_mode, put=__set_mode)) int32_t  mode;

/// @brief Field left offset 0x14
 __declspec(property(get=__get_left, put=__set_left)) int32_t  left;

/// @brief Field table offset 0x18
 __declspec(property(get=__get_table, put=__set_table)) int32_t  table;

/// @brief Field index offset 0x1c
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field blens offset 0x20
 __declspec(property(get=__get_blens, put=__set_blens)) ::ArrayW<int32_t,::Array<int32_t>*>  blens;

/// @brief Field bb offset 0x28
 __declspec(property(get=__get_bb, put=__set_bb)) ::ArrayW<int32_t,::Array<int32_t>*>  bb;

/// @brief Field tb offset 0x30
 __declspec(property(get=__get_tb, put=__set_tb)) ::ArrayW<int32_t,::Array<int32_t>*>  tb;

/// @brief Field codes offset 0x38
 __declspec(property(get=__get_codes, put=__set_codes)) ::Org::BouncyCastle::Utilities::Zlib::InfCodes*  codes;

/// @brief Field last offset 0x40
 __declspec(property(get=__get_last, put=__set_last)) int32_t  last;

/// @brief Field bitk offset 0x44
 __declspec(property(get=__get_bitk, put=__set_bitk)) int32_t  bitk;

/// @brief Field bitb offset 0x48
 __declspec(property(get=__get_bitb, put=__set_bitb)) int32_t  bitb;

/// @brief Field hufts offset 0x50
 __declspec(property(get=__get_hufts, put=__set_hufts)) ::ArrayW<int32_t,::Array<int32_t>*>  hufts;

/// @brief Field window offset 0x58
 __declspec(property(get=__get_window, put=__set_window)) ::ArrayW<uint8_t,::Array<uint8_t>*>  window;

/// @brief Field end offset 0x60
 __declspec(property(get=__get_end, put=__set_end)) int32_t  end;

/// @brief Field read offset 0x64
 __declspec(property(get=__get_read, put=__set_read)) int32_t  read;

/// @brief Field write offset 0x68
 __declspec(property(get=__get_write, put=__set_write)) int32_t  write;

/// @brief Field checkfn offset 0x70
 __declspec(property(get=__get_checkfn, put=__set_checkfn)) ::System::Object*  checkfn;

/// @brief Field check offset 0x78
 __declspec(property(get=__get_check, put=__set_check)) int64_t  check;

/// @brief Field inftree offset 0x80
 __declspec(property(get=__get_inftree, put=__set_inftree)) ::Org::BouncyCastle::Utilities::Zlib::InfTree*  inftree;

static inline void setStaticF_inflate_mask(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_inflate_mask() ;

static inline void setStaticF_border(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_border() ;

constexpr void __set_mode(int32_t  value) ;

constexpr int32_t& __get_mode() ;

constexpr int32_t const& __get_mode() const;

constexpr void __set_left(int32_t  value) ;

constexpr int32_t& __get_left() ;

constexpr int32_t const& __get_left() const;

constexpr void __set_table(int32_t  value) ;

constexpr int32_t& __get_table() ;

constexpr int32_t const& __get_table() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_blens(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_blens() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_blens() const;

constexpr void __set_bb(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_bb() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_bb() const;

constexpr void __set_tb(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_tb() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_tb() const;

constexpr void __set_codes(::Org::BouncyCastle::Utilities::Zlib::InfCodes*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Zlib::InfCodes* __get_codes() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::InfCodes*> __get_codes() const;

constexpr void __set_last(int32_t  value) ;

constexpr int32_t& __get_last() ;

constexpr int32_t const& __get_last() const;

constexpr void __set_bitk(int32_t  value) ;

constexpr int32_t& __get_bitk() ;

constexpr int32_t const& __get_bitk() const;

constexpr void __set_bitb(int32_t  value) ;

constexpr int32_t& __get_bitb() ;

constexpr int32_t const& __get_bitb() const;

constexpr void __set_hufts(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_hufts() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_hufts() const;

constexpr void __set_window(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_window() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_window() const;

constexpr void __set_end(int32_t  value) ;

constexpr int32_t& __get_end() ;

constexpr int32_t const& __get_end() const;

constexpr void __set_read(int32_t  value) ;

constexpr int32_t& __get_read() ;

constexpr int32_t const& __get_read() const;

constexpr void __set_write(int32_t  value) ;

constexpr int32_t& __get_write() ;

constexpr int32_t const& __get_write() const;

constexpr void __set_checkfn(::System::Object*  value) ;

constexpr ::System::Object* __get_checkfn() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_checkfn() const;

constexpr void __set_check(int64_t  value) ;

constexpr int64_t& __get_check() ;

constexpr int64_t const& __get_check() const;

constexpr void __set_inftree(::Org::BouncyCastle::Utilities::Zlib::InfTree*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Zlib::InfTree* __get_inftree() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::InfTree*> __get_inftree() const;

static inline ::Org::BouncyCastle::Utilities::Zlib::InfBlocks* New_ctor(::Org::BouncyCastle::Utilities::Zlib::ZStream*  z, ::System::Object*  checkfn, int32_t  w) ;

/// @brief Method .ctor addr 0x1164554 size 0x148 virtual false final false
inline void _ctor(::Org::BouncyCastle::Utilities::Zlib::ZStream*  z, ::System::Object*  checkfn, int32_t  w) ;

/// @brief Method reset addr 0x11646bc size 0x90 virtual false final false
inline void reset(::Org::BouncyCastle::Utilities::Zlib::ZStream*  z, ::ArrayW<int64_t,::Array<int64_t>*>  c) ;

/// @brief Method proc addr 0x1164750 size 0x10b0 virtual false final false
inline int32_t proc(::Org::BouncyCastle::Utilities::Zlib::ZStream*  z, int32_t  r) ;

/// @brief Method free addr 0x11667dc size 0x1c virtual false final false
inline void free(::Org::BouncyCastle::Utilities::Zlib::ZStream*  z) ;

/// @brief Method set_dictionary addr 0x11667f8 size 0x40 virtual false final false
inline void set_dictionary(::ArrayW<uint8_t,::Array<uint8_t>*>  d, int32_t  start, int32_t  n) ;

/// @brief Method sync_point addr 0x1166838 size 0x10 virtual false final false
inline int32_t sync_point() ;

/// @brief Method inflate_flush addr 0x1165800 size 0x180 virtual false final false
inline int32_t inflate_flush(::Org::BouncyCastle::Utilities::Zlib::ZStream*  z, int32_t  r) ;

// Ctor Parameters [CppParam { name: "", ty: "InfBlocks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InfBlocks(InfBlocks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InfBlocks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InfBlocks(InfBlocks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InfBlocks()  = default;
public:


// Fields

// Static field inflate_mask

// Static field border


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::InfBlocks, 0x88>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::InfBlocks);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::InfBlocks*, "Org.BouncyCastle.Utilities.Zlib", "InfBlocks");
