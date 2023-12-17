#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LongRollingAverage)
// Forward declare root types
namespace GlobalNamespace {
class LongRollingAverage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LongRollingAverage);
// Type: ::LongRollingAverage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12832))
// CS Name: ::LongRollingAverage*
class CORDL_TYPE LongRollingAverage : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _currentTotal offset 0x10
 __declspec(property(get=__get__currentTotal, put=__set__currentTotal)) int64_t  _currentTotal;

/// @brief Field _currentAverage offset 0x18
 __declspec(property(get=__get__currentAverage, put=__set__currentAverage)) int64_t  _currentAverage;

/// @brief Field _buffer offset 0x20
 __declspec(property(get=__get__buffer, put=__set__buffer)) ::ArrayW<int64_t,::Array<int64_t>*>  _buffer;

/// @brief Field _index offset 0x28
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _length offset 0x2c
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_currentAverage)) int64_t  currentAverage;

 __declspec(property(get=get_hasValue)) bool  hasValue;

constexpr void __set__currentTotal(int64_t  value) ;

constexpr int64_t& __get__currentTotal() ;

constexpr int64_t const& __get__currentTotal() const;

constexpr void __set__currentAverage(int64_t  value) ;

constexpr int64_t& __get__currentAverage() ;

constexpr int64_t const& __get__currentAverage() const;

constexpr void __set__buffer(::ArrayW<int64_t,::Array<int64_t>*>  value) ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*>& __get__buffer() ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& __get__buffer() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method get_currentAverage addr 0xe430f4 size 0x8 virtual false final false
inline int64_t get_currentAverage() ;

/// @brief Method get_hasValue addr 0xe430fc size 0x10 virtual false final false
inline bool get_hasValue() ;

static inline ::GlobalNamespace::LongRollingAverage* New_ctor(int32_t  window) ;

/// @brief Method .ctor addr 0xe4310c size 0x68 virtual false final false
inline void _ctor(int32_t  window) ;

/// @brief Method Update addr 0xe43174 size 0xf8 virtual false final false
inline void Update(int64_t  value) ;

/// @brief Method Reset addr 0xe4326c size 0xc virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "LongRollingAverage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LongRollingAverage(LongRollingAverage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LongRollingAverage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LongRollingAverage(LongRollingAverage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LongRollingAverage()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LongRollingAverage, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LongRollingAverage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LongRollingAverage*, "", "LongRollingAverage");
