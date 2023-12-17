#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsReplayWindow)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReplayWindow;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow);
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReplayWindow
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1234))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsReplayWindow*
class CORDL_TYPE DtlsReplayWindow : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field VALID_SEQ_MASK offset 0x0
static constexpr int64_t  VALID_SEQ_MASK{static_cast<int64_t>(0xffffffffffff)};

/// @brief Field WINDOW_SIZE offset 0x0
static constexpr int64_t  WINDOW_SIZE{static_cast<int64_t>(0x40)};

/// @brief Field mLatestConfirmedSeq offset 0x10
 __declspec(property(get=__get_mLatestConfirmedSeq, put=__set_mLatestConfirmedSeq)) int64_t  mLatestConfirmedSeq;

/// @brief Field mBitmap offset 0x18
 __declspec(property(get=__get_mBitmap, put=__set_mBitmap)) int64_t  mBitmap;

constexpr void __set_mLatestConfirmedSeq(int64_t  value) ;

constexpr int64_t& __get_mLatestConfirmedSeq() ;

constexpr int64_t const& __get_mLatestConfirmedSeq() const;

constexpr void __set_mBitmap(int64_t  value) ;

constexpr int64_t& __get_mBitmap() ;

constexpr int64_t const& __get_mBitmap() const;

/// @brief Method ShouldDiscard addr 0xf6f894 size 0x44 virtual false final false
inline bool ShouldDiscard(int64_t  seq) ;

/// @brief Method ReportAuthenticated addr 0xf6f8e0 size 0xcc virtual false final false
inline void ReportAuthenticated(int64_t  seq) ;

/// @brief Method Reset addr 0xf712fc size 0x10 virtual false final false
inline void Reset() ;

static inline ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* New_ctor() ;

/// @brief Method .ctor addr 0xf6d52c size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReplayWindow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DtlsReplayWindow(DtlsReplayWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReplayWindow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtlsReplayWindow(DtlsReplayWindow const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DtlsReplayWindow()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*, "Org.BouncyCastle.Crypto.Tls", "DtlsReplayWindow");
