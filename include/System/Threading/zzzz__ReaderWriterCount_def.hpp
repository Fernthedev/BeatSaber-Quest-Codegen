#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriterCount)
// Forward declare root types
namespace System::Threading {
class ReaderWriterCount;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ReaderWriterCount);
// Type: System.Threading::ReaderWriterCount
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14318))
// CS Name: ::System.Threading::ReaderWriterCount*
class CORDL_TYPE ReaderWriterCount : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field lockID offset 0x10
 __declspec(property(get=__get_lockID, put=__set_lockID)) int64_t  lockID;

/// @brief Field readercount offset 0x18
 __declspec(property(get=__get_readercount, put=__set_readercount)) int32_t  readercount;

/// @brief Field writercount offset 0x1c
 __declspec(property(get=__get_writercount, put=__set_writercount)) int32_t  writercount;

/// @brief Field upgradecount offset 0x20
 __declspec(property(get=__get_upgradecount, put=__set_upgradecount)) int32_t  upgradecount;

/// @brief Field next offset 0x28
 __declspec(property(get=__get_next, put=__set_next)) ::System::Threading::ReaderWriterCount*  next;

constexpr void __set_lockID(int64_t  value) ;

constexpr int64_t& __get_lockID() ;

constexpr int64_t const& __get_lockID() const;

constexpr void __set_readercount(int32_t  value) ;

constexpr int32_t& __get_readercount() ;

constexpr int32_t const& __get_readercount() const;

constexpr void __set_writercount(int32_t  value) ;

constexpr int32_t& __get_writercount() ;

constexpr int32_t const& __get_writercount() const;

constexpr void __set_upgradecount(int32_t  value) ;

constexpr int32_t& __get_upgradecount() ;

constexpr int32_t const& __get_upgradecount() const;

constexpr void __set_next(::System::Threading::ReaderWriterCount*  value) ;

constexpr ::System::Threading::ReaderWriterCount* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterCount*> __get_next() const;

static inline ::System::Threading::ReaderWriterCount* New_ctor() ;

/// @brief Method .ctor addr 0x2813f9c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCount", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReaderWriterCount(ReaderWriterCount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCount", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReaderWriterCount(ReaderWriterCount const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReaderWriterCount()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ReaderWriterCount, 0x30>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::ReaderWriterCount);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterCount*, "System.Threading", "ReaderWriterCount");
