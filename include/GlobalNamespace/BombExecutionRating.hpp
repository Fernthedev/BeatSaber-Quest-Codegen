// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Rating because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BombExecutionRating
  // [TokenAttribute] Offset: FFFFFFFF
  class BombExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
    public:
    // Nested type: GlobalNamespace::BombExecutionRating::Rating
    struct Rating;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BombExecutionRating/Rating
    // [TokenAttribute] Offset: FFFFFFFF
    struct Rating/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Rating
      constexpr Rating(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BombExecutionRating/Rating OK
      static constexpr const int OK = 0;
      // Get static field: static public BombExecutionRating/Rating OK
      static GlobalNamespace::BombExecutionRating::Rating _get_OK();
      // Set static field: static public BombExecutionRating/Rating OK
      static void _set_OK(GlobalNamespace::BombExecutionRating::Rating value);
      // static field const value: static public BombExecutionRating/Rating NotGood
      static constexpr const int NotGood = 1;
      // Get static field: static public BombExecutionRating/Rating NotGood
      static GlobalNamespace::BombExecutionRating::Rating _get_NotGood();
      // Set static field: static public BombExecutionRating/Rating NotGood
      static void _set_NotGood(GlobalNamespace::BombExecutionRating::Rating value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // BombExecutionRating/Rating
    #pragma pack(pop)
    static check_size<sizeof(BombExecutionRating::Rating), 0 + sizeof(int)> __GlobalNamespace_BombExecutionRating_RatingSizeCheck;
    static_assert(sizeof(BombExecutionRating::Rating) == 0x4);
    // private BombExecutionRating/Rating <rating>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BombExecutionRating::Rating rating;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BombExecutionRating::Rating) == 0x4);
    // Creating value type constructor for type: BombExecutionRating
    BombExecutionRating(GlobalNamespace::BombExecutionRating::Rating rating_ = {}) noexcept : rating{rating_} {}
    // Creating conversion operator: operator GlobalNamespace::BombExecutionRating::Rating
    constexpr operator GlobalNamespace::BombExecutionRating::Rating() const noexcept {
      return rating;
    }
    // Get instance field reference: private BombExecutionRating/Rating <rating>k__BackingField
    GlobalNamespace::BombExecutionRating::Rating& dyn_$rating$k__BackingField();
    // public BombExecutionRating/Rating get_rating()
    // Offset: 0x10D9EE4
    GlobalNamespace::BombExecutionRating::Rating get_rating();
    // public System.Void set_rating(BombExecutionRating/Rating value)
    // Offset: 0x10D9EEC
    void set_rating(GlobalNamespace::BombExecutionRating::Rating value);
    // public System.Void .ctor(System.Single time, BombExecutionRating/Rating rating)
    // Offset: 0x10CFD90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombExecutionRating* New_ctor(float time, GlobalNamespace::BombExecutionRating::Rating rating) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BombExecutionRating::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombExecutionRating*, creationType>(time, rating)));
    }
  }; // BombExecutionRating
  #pragma pack(pop)
  static check_size<sizeof(BombExecutionRating), 24 + sizeof(GlobalNamespace::BombExecutionRating::Rating)> __GlobalNamespace_BombExecutionRatingSizeCheck;
  static_assert(sizeof(BombExecutionRating) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombExecutionRating*, "", "BombExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombExecutionRating::Rating, "", "BombExecutionRating/Rating");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BombExecutionRating::get_rating
// Il2CppName: get_rating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BombExecutionRating::Rating (GlobalNamespace::BombExecutionRating::*)()>(&GlobalNamespace::BombExecutionRating::get_rating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombExecutionRating*), "get_rating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombExecutionRating::set_rating
// Il2CppName: set_rating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombExecutionRating::*)(GlobalNamespace::BombExecutionRating::Rating)>(&GlobalNamespace::BombExecutionRating::set_rating)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BombExecutionRating/Rating")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombExecutionRating*), "set_rating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombExecutionRating::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
