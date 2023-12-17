#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CodePointIndexer)
namespace Mono::Globalization::Unicode {
struct __CodePointIndexer__TableRange;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
struct __CodePointIndexer__TableRange;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::CodePointIndexer);
MARK_VAL_T(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange);
// Type: ::TableRange
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2257))
// CS Name: ::CodePointIndexer::TableRange
struct CORDL_TYPE __CodePointIndexer__TableRange : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Start offset 0x0
 __declspec(property(get=__get_Start, put=__set_Start)) int32_t  Start;

/// @brief Field End offset 0x4
 __declspec(property(get=__get_End, put=__set_End)) int32_t  End;

/// @brief Field Count offset 0x8
 __declspec(property(get=__get_Count, put=__set_Count)) int32_t  Count;

/// @brief Field IndexStart offset 0xc
 __declspec(property(get=__get_IndexStart, put=__set_IndexStart)) int32_t  IndexStart;

/// @brief Field IndexEnd offset 0x10
 __declspec(property(get=__get_IndexEnd, put=__set_IndexEnd)) int32_t  IndexEnd;

constexpr void __set_Start(int32_t  value) ;

constexpr int32_t& __get_Start() ;

constexpr int32_t const& __get_Start() const;

constexpr void __set_End(int32_t  value) ;

constexpr int32_t& __get_End() ;

constexpr int32_t const& __get_End() const;

constexpr void __set_Count(int32_t  value) ;

constexpr int32_t& __get_Count() ;

constexpr int32_t const& __get_Count() const;

constexpr void __set_IndexStart(int32_t  value) ;

constexpr int32_t& __get_IndexStart() ;

constexpr int32_t const& __get_IndexStart() const;

constexpr void __set_IndexEnd(int32_t  value) ;

constexpr int32_t& __get_IndexEnd() ;

constexpr int32_t const& __get_IndexEnd() const;

/// @brief Method .ctor addr 0x24154a0 size 0x18 virtual false final false
inline void _ctor(int32_t  start, int32_t  end, int32_t  indexStart) ;

// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexEnd", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __CodePointIndexer__TableRange(int32_t  Start, int32_t  End, int32_t  Count, int32_t  IndexStart, int32_t  IndexEnd) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CodePointIndexer__TableRange(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CodePointIndexer__TableRange()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, 0x14>, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode
// Type: Mono.Globalization.Unicode::CodePointIndexer
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2258))
// CS Name: ::Mono.Globalization.Unicode::CodePointIndexer*
class CORDL_TYPE CodePointIndexer : public ::System::Object {
public:
// Declarations
using TableRange = ::Mono::Globalization::Unicode::__CodePointIndexer__TableRange;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field ranges offset 0x10
 __declspec(property(get=__get_ranges, put=__set_ranges)) ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange,::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*>  ranges;

/// @brief Field TotalCount offset 0x18
 __declspec(property(get=__get_TotalCount, put=__set_TotalCount)) int32_t  TotalCount;

/// @brief Field defaultIndex offset 0x1c
 __declspec(property(get=__get_defaultIndex, put=__set_defaultIndex)) int32_t  defaultIndex;

/// @brief Field defaultCP offset 0x20
 __declspec(property(get=__get_defaultCP, put=__set_defaultCP)) int32_t  defaultCP;

constexpr void __set_ranges(::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange,::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*>  value) ;

constexpr ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange,::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*>& __get_ranges() ;

constexpr ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange,::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*> const& __get_ranges() const;

constexpr void __set_TotalCount(int32_t  value) ;

constexpr int32_t& __get_TotalCount() ;

constexpr int32_t const& __get_TotalCount() const;

constexpr void __set_defaultIndex(int32_t  value) ;

constexpr int32_t& __get_defaultIndex() ;

constexpr int32_t const& __get_defaultIndex() const;

constexpr void __set_defaultCP(int32_t  value) ;

constexpr int32_t& __get_defaultCP() ;

constexpr int32_t const& __get_defaultCP() const;

static inline ::Mono::Globalization::Unicode::CodePointIndexer* New_ctor(::ArrayW<int32_t,::Array<int32_t>*>  starts, ::ArrayW<int32_t,::Array<int32_t>*>  ends, int32_t  defaultIndex, int32_t  defaultCP) ;

/// @brief Method .ctor addr 0x241534c size 0x154 virtual false final false
inline void _ctor(::ArrayW<int32_t,::Array<int32_t>*>  starts, ::ArrayW<int32_t,::Array<int32_t>*>  ends, int32_t  defaultIndex, int32_t  defaultCP) ;

/// @brief Method ToIndex addr 0x24154b8 size 0x84 virtual false final false
inline int32_t ToIndex(int32_t  cp) ;

// Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CodePointIndexer(CodePointIndexer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodePointIndexer(CodePointIndexer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CodePointIndexer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::CodePointIndexer, 0x28>, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::CodePointIndexer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
